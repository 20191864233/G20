import java.util.Scanner;

public class Poly{
	public static void main(String[] args){
		//初始化
		Scanner s = new Scanner(System.in);
		int degree;//多项式的最高次
		double[] coeffs;//多项式的各项系数
		String pStr;//多项式的字符串表示
		boolean loop;
		double x;//自变量
		
		//输入一个多项式
		do{
			//输入多项式的最高次系数（整数）
			System.out.print("输入多项式的最高系数:");
			degree = s.nextInt();
			//输入多项式各项的系数（浮点数数组）
			coeffs = new double[ degree+1 ];
			for(int i = degree; i >= 0; i--){
				//输入第i项的系数
				System.out.print("输入第" + i + "项的系数：");
				coeffs[i] = s.nextDouble();
			}
			
			//输入多项式的字符串表示形式
			pStr = "p(x) = ";
			for(int i = degree; i > 0; i--){
				if(coeffs[i] == 0){
					continue;
				}
				pStr = pStr + coeffs[i] + "*x^" + i + "+";
			}
			if(coeffs[0] == 0){
				pStr = pStr.substring(0,pStr.length()-1);
			}else{
				pStr += coeffs[0];
			}
			
			System.out.println(pStr);
			System.out.print("多项式输入这是否正确（true/false）？");
			loop = s.nextBoolean();
		}while(!loop);
		
		do{
			//输入自变量x的值
		    System.out.print("输入自变量x的值：");
		    x = s.nextDouble();
		
	        //计算x下多项式的值
		    double p = 0;
		    for(int i = degree; i > 0; i--){
			    p = x * (p + coeffs[i]);
		    }
		    p += coeffs[0];
	        System.out.println("p(" + x + ")=" + p);
			System.out.print("继续计算（true/false）？");
			loop = s.nextBoolean();
		}while(loop);
	}
}