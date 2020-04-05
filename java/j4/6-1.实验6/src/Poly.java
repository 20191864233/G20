import java.util.Scanner;

public class Poly {
	public static void main(String[] args) {
		// ��ʼ��
		Scanner s = new Scanner(System.in); // ���ڽ��ռ�������
		int degree; // ����ʽ����ߴ�
		double[] coeffs; // ����ʽ�����ϵ��
		String p; // ����ʽ�������ʽ
		//
		// ������ߴ� Scanner
		do{
			System.out.print("������ߴΣ�");
			degree = s.nextInt();
			coeffs = new double[degree + 1];
			// ��������ϵ�� ����c
			// ��n��0��������c[i] ѭ��while/for
			for (int i = degree; i >= 0; i--) {
				System.out.print("�����" + i + "��ϵ����");
				coeffs[i] = s.nextDouble();
			}
			// ��������ʽ�ı�ʾ��ʽ�����
			p = " p(x)=";
			// ��n��0
			// p(x) += c[i]*x^i
			for (int i = degree; i > 0; i--) {
				if (coeffs[i] != 0) {
					p += coeffs[i] + "*x^" + i + " +";
				}
			}
			if (coeffs[0] != 0) {
				p += coeffs[0];
			}
			// ȥ������ʽ���ʽĩβ��+
			if (p.charAt(p.length() - 1) == '+') {
				p = p.substring(0, p.length() - 1);
			}
			System.out.println("\n������Ķ���ʽ�ǣ�\n" + p);
			System.out.print("\n�������룿(true/false)");
		}while(s.nextBoolean());

		// �����Ա�����ֵx
		// �������ʽ��ֵ�����
		
		
		do{
			System.out.println("�����Ա�����ֵ> ");
			double x = s.nextDouble();
			double result = 0;
			for (int i = degree; i > 0; i--) {
				result = (result + coeffs[i]) * x;
			}
			result += coeffs[0];
			System.out.print("p(" + x + ") = " + result  );
			System.out.print("\n���¼��㣿(true/false)");		
		}while(s.nextBoolean());
	}
}
