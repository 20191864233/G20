import java.util.Scanner;

public class Poly {
	public static void main(String[] args) {
		// 初始化
		Scanner s = new Scanner(System.in); // 用于接收键盘输入
		int degree; // 多项式的最高次
		double[] coeffs; // 多项式各项的系数
		String p; // 多项式的输出形式
		//
		// 输入最高次 Scanner
		do{
			System.out.print("输入最高次：");
			degree = s.nextInt();
			coeffs = new double[degree + 1];
			// 输入各项的系数 数组c
			// 从n到0依次输入c[i] 循环while/for
			for (int i = degree; i >= 0; i--) {
				System.out.print("输入第" + i + "项系数：");
				coeffs[i] = s.nextDouble();
			}
			// 构建多项式的表示形式并输出
			p = " p(x)=";
			// 从n到0
			// p(x) += c[i]*x^i
			for (int i = degree; i > 0; i--) {
				if (coeffs[i] != 0) {
					p += coeffs[i] + "*x^" + i + " +";
				}
			}
			if (coeffs[0] != 0) {
				p += coeffs[0];
			}
			// 去掉多项式表达式末尾的+
			if (p.charAt(p.length() - 1) == '+') {
				p = p.substring(0, p.length() - 1);
			}
			System.out.println("\n你输入的多项式是：\n" + p);
			System.out.print("\n重新输入？(true/false)");
		}while(s.nextBoolean());

		// 输入自变量的值x
		// 计算多项式的值并输出
		
		
		do{
			System.out.println("输入自变量的值> ");
			double x = s.nextDouble();
			double result = 0;
			for (int i = degree; i > 0; i--) {
				result = (result + coeffs[i]) * x;
			}
			result += coeffs[0];
			System.out.print("p(" + x + ") = " + result  );
			System.out.print("\n重新计算？(true/false)");		
		}while(s.nextBoolean());
	}
}
