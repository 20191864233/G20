public class Test{
	public static void main(String[] args){
		boolean b = true;                              /* 基本数据类型 */
		System.out.println("b = " + b);
		
		char c1 = '中';
		System.out.println("c1 = " + c1);
		
		char c2 = 65;
        System.out.println("c2 = " + c2);
		
		long i1 = 10L;
		int i2 = 015;
		int i3 = 0x16;
		System.out.println("i1 = " + i1);
		System.out.println("i2 = " + i2);
		System.out.println("i3 = " + i3);
		
		float f = 3.14f;
		double d = 3.14e2;
		System.out.println("f = " + f);
		System.out.println("d = " + d);		
		
		float f2 = 3.8f;
		int i4 = (int)(f2 + 0.5);	
		System.out.println("f2 = " + f2);
		System.out.println("i4 = " + i4);

        int[] data = new int[3];                    /* 数组 */
        for(int i = 0;i < data.length; i++){
			System.out.print(data[i] + "    ");
		}  		
	}
}