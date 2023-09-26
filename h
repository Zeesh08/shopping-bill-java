import static java.lang.System.*;
import java.util.Scanner;
class h
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		out.println("\tHey! Enter the item name: \t");
		String s = sc.next();
		out.println("Enter the value: ");
		int v = sc.nextInt();
		out.println("Enter the quantity: ");
		float q = sc.nextFloat();
		out.println("Enter the GST: ");
		float g = sc.nextFloat();
		float tb = (v*q)+(g*q);
		out.println("Total bill: " +tb);
		out.println("\tThank you!!\n\tVisit again");
		
	}
}	
