import java.util.Scanner;

public class IfTest1{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a score(0~100):");
		int score = s.nextInt();
		char grade = ' ';
		
		if(score < 60){
			grade = 'F';
		}else if(score < 70){
			grade = 'D';
		}else if(score < 80){
			grade = 'C';
		}else if(score < 90){
			grade = 'B';
	    }else{
			grade = 'A';
		}
		
		System.out.print("score:" + score + "   " + "grade:" + grade);
	}
}