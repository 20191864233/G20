public class BreakTest1{
	public static void main(String[] args){
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				System.out.print((i * 10) + (j + 1) + "    ");
				if(i == 0){
				System.out.print(" ");
				}
				if((j + 1) % 10 == 0){
					break;
				}
			}
			System.out.println();
		}
	}
}