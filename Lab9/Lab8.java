import javax.swing.*;
import java.util.*;

import javax.swing.JOptionPane;
	
public class Lab8 {
	static {System.loadLibrary("MyCPPLibrary"); }
	
	public native double calculateMean(int[] numbers);
	public native double calculateSTDDev(int[] numbers);
	
	public static void main(String[] args) {
		Scanner k = new Scanner(System.in);
		int[] numbers = null;
		int terms=0;
		boolean b = true; 
		while (b) {
			try {
				String input = JOptionPane.showInputDialog(null, "Enter number of terms", "Input",JOptionPane.QUESTION_MESSAGE);
				if (input == null) {	
					System.exit(0);
				}
				terms = Integer.parseInt(input);
				if (terms <= 0) {
					JOptionPane.showMessageDialog(null, "Error: Must be greater than 0", "Error",JOptionPane.ERROR_MESSAGE);
				}
				else {
					numbers = new int[terms];
					Random r = new Random();
				for (int i =0; i < terms; i++) {
					numbers[i] = r.nextInt(101);
				}
				b = false;
			}
		} catch (NumberFormatException e) {
			JOptionPane.showMessageDialog(null, "Invalid Input: Must be a number", "Error",JOptionPane.ERROR_MESSAGE);
		}
	}
		Lab8 l8 = new Lab8();
		long timeBefore = System.currentTimeMillis();
		double mean = l8.calculateMean(numbers);
		double std = l8.calculateSTDDev(numbers);
		long timeAfter = System.currentTimeMillis();

		System.out.println("generated numbers" + Arrays.toString(numbers));
		System.out.printf("Mean is: %.2f%n",mean);
		System.out.printf("Standard deviation is: %.2f%n", std);
		System.out.println("Time taken before "+ timeBefore);
		System.out.println("Time taken after "+ timeAfter);
		
		JOptionPane.showMessageDialog(null, String.format("Generated Numbers: %s%nMean: %.2f%nStandard Deviation:%.2f", 
				Arrays.toString(numbers),mean,std), "Results", JOptionPane.INFORMATION_MESSAGE);
	}
}
