#include <cmath>
#include <omp.h>
#include "Lab8.h"

JNIEXPORT jdouble Java_Lab8_calculateMean(JNIEnv* env, jobject pThis, jintArray javaNums) {
	int length = env->GetArrayLength(javaNums);
	jint* elements = (env)->GetIntArrayElements(javaNums, NULL);
	double sum = 0, mean = 0, std = 0;
	omp_set_num_threads(7);

#pragma omp parallel for reduction(+: sum)
	for (int i = 0; i < length; i++) {
		sum += elements[i];
	}
#pragma omp barrier
	mean = sum / length;
	env->ReleaseIntArrayElements(javaNums, elements, 0);
	return mean;
}
JNIEXPORT jdouble Java_Lab8_calculateSTDDev(JNIEnv* env, jobject pThis, jintArray javaNums) {
	int length = env->GetArrayLength(javaNums);
	jint* elements = (env)->GetIntArrayElements(javaNums, NULL);
	double sum = 0, mean = 0, std = 0, var = 0;
#pragma omp parallel for reduction(+: sum)
	for (int i = 0; i < length; i++) {
		sum += elements[i];
	}
#pragma omp barrier
	mean = sum / length;
#pragma omp parallel for reduction(+: var)
	for (int j = 0; j < length; j++) {
		var += pow(elements[j] - mean, 2);
	}
#pragma omp barrier
	var /= length;
	std = sqrt(var);

	env->ReleaseIntArrayElements(javaNums, elements, 0);
	return std;

}