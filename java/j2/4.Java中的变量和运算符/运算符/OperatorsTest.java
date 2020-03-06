public class OperatorsTest{
	public static void main(String[] args){
		int i = 5;
		if(++i > 5){
			System.out.println("++i > 5");
		}
		System.out.println("i = " + i);
		
		byte b = 12;
		System.out.println("b = " + b);
		
		int i1 = 22, i2 = 5;
		System.out.println(i1 + " & " + i2 + " = " + (i1 & i2));
		
		System.out.println(i1 + " + " + i2 + " = " + (i1 + i2));
	}
}