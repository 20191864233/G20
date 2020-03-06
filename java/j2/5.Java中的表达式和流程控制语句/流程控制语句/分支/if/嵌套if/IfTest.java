import java.util.Scanner;

public class IfTest{
	public static void main(String[] args){
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a score(0~100):");
		int score = s.nextInt();
		char grade = ' ';
		
		if(score >= 80){                       /* Ç¶Ì×if */
			if(score >= 90){
				grade = 'A';
			}else{
				grade = 'B';
			}
		}else{
			if(score >= 60){
				if(score >= 70){
					grade = 'C';
				}else{
					grade = 'D';
				}
			}else{
				grade = 'F';
			}
			
		}
		
		System.out.print("score:" + score + "   " + "grade:" + grade);
	}
}