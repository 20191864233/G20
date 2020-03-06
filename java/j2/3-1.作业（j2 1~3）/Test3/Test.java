public class Test{
	public static void main(String[] args){
		char c1 = '你';
		char c2 = '我';
		char c3 = '他';
		
		int x1 = (int)c1;
		int x2 = (int)c2;
		int x3 = (int)c3;
		
		System.out.println("“你”的Unicode编码是：" + x1);
		System.out.println("“我”的Unicode编码是：" + x2);
		System.out.println("“他”的Unicode编码是：" + x3);
 	}
}