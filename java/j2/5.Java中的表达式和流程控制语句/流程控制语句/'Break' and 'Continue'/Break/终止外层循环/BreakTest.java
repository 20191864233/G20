public class BreakTest{
	public static void main(String[] args){
		for(int i = 0; ;i++){
			System.out.print(i + 1 + "    ");
			if(i < 10){
				System.out.print(" ");
			}
			if((i + 1) % 10 == 0){
				System.out.println();
			}
			if(i == 99){
				break;
			}
		}
	}
}