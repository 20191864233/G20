import java.util.Scanner;

public class EnterYourName {
	public static void main (String[] s){
		
		Scanner in = new Scanner (System.in);
		System.out.print ("Enter your name:");
		String name = in.nextLine();
		
		System.out.println ("Welcome," + name);
	}
}