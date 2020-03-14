public class Test2{
	public static void main(String[] args){
		int i = 0;
		int j = 0;
		int sum = 0;
		int mut = 0;
		
		for(i = 1; i <= 10; i++){
			mut = i;
			
			for (j = 1; j < i; j++){
				mut *= j;
			}
			
			sum += mut;	
		}
		
		System.out.println("1!+ 2! + ，，，，，， + 10! = " + sum);
	}
}