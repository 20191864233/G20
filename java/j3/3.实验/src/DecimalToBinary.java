import java.util.Scanner;


public class DecimalToBinary {

	public static void main(String[] args) {
		//初始化
		Scanner s = new Scanner(System.in);
		double d;
		
		for(;;) {
			//输入一个十进制数d
			System.out.print("Enter a decimal > ");
			d = s.nextDouble();
			
			
			//将d分为整数部分intPart和小数部分remainPart
			int intPart = (int)d;
			double remainPart = d - (double)intPart;
			
			
			//将intPart转换为二进制
			char intAll[] = new char[100];
			char RevIntAll[] = new char[100];
			int a = 0;
			int j = 0;
			
			for(;;) {
				int remainder = intPart % 2;
				int division = intPart / 2;
				
				if(division == 0) {
					intAll[a] = (char)(remainder + 48);
					a++;
					break;
				}else {
					intAll[a] = (char)(remainder + 48);
					a++;
					intPart = division;
				}
			}
			for(int i = (intAll.length - 1); i >= 0; i--) {
				RevIntAll[j] = intAll[i];
				j++;
			}
			
			
			//将remainPart转换为二进制
			char[] remainAll = new char[5];
			for(int i = 0; i <= 4; i++) {
				double multiplicative = remainPart * 2;
				int integer = (int)multiplicative;
				double remain = multiplicative - integer;
				
				if(remain == 0) {
					remainAll[i] = (char)(integer + 48);
					break;
				}else {
					remainAll[i] = (char)(integer + 48);
					remainPart = remain;
				}
			}
			
			
			//将转换之后的整数部分和小数部分合并输出
			System.out.print("十进制数 " + d + " 转化为二进制为");
			
			if(intPart != 0) {
				for(int i = 0;i < RevIntAll.length; i++) {
					if(RevIntAll[i] != '\u0000') {
						System.out.print(RevIntAll[i]);
					}
				}
			}
			
			if(remainPart != 0) {
				System.out.print(".");
				
				for(int i = 0;i < remainAll.length; i++) {
					if(remainAll[i] != '\u0000') {
						System.out.print(remainAll[i]);
					}
				}
			}
			
			System.out.println();
			
			
			//循环
			System.out.print("继续转化（Y/N）？");
			String str1 = s.next();
			String str2 = "n";
			if(str1.equalsIgnoreCase(str2)) {
				break;
			}
		}
		
	}

}
