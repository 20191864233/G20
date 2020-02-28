//This is my first java program
/*
 *这也是注释
 *这还是注释
*/


public class TheFirstJavaProgram{
	/**
	这是程序的入口main方法。
	*/
	public static void main(String[] args){
		String s = "hello";
		char c = s.charAt(1);
		System.out.println(c);		
		f();
		System.out.println("Hello World!");
	}
	
	public static void f(){
		System.out.println("From f:Hello");
	}
}