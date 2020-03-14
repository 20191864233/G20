public  class ArrayTest{
	public static void main(String[] args){
		int a[] = {1,2,3};                                 /* 一维数组 */
		a = new int[5];
		for(int i = 0; i < a.length; i++){
			System.out.println("a[" + i + "] = " + a[i]);
		}
		
		System.out.println();
		
		int[][] data = {{1,2},{3,4,0,9},{4,5,6}};          /* 二维数组 */
		System.out.println("data.length = " + data.length);
		for(int i = 0; i < data.length; i++){
			System.out.println("data[" + i + "].length = " + data[i].length);
			for(int j = 0; j < data[i].length; j++){
				System.out.print(data[i][j] + "   ");
			}
			System.out.println();
		}
	}
}