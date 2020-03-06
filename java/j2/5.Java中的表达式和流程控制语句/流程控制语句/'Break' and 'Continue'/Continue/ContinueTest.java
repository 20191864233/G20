public class ContinueTest{
	public static void main(String[] args){
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				if((j + 1) % 11 == 0){
					continue;
				}
				System.out.print((i * 10) + (j + 1) + "    ");
				if(i == 0){
				System.out.print(" ");
				}
			}
			System.out.println();
		}
	}
}