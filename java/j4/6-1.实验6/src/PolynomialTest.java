import java.util.*;
public class PolynomialTest {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Polynomial p = new Polynomial();
		do{
			System.out.print("������ߴ�: ");
			p.setDegree(s.nextInt());
			
			for(int i = p.getDegree(); i >=0; i--){
				System.out.print(" �����" + i+ "���ϵ����");
				p.setCoeff(i,s.nextDouble());
			}
			
			System.out.println("������Ķ���ʽΪ��\n" + p);
			System.out.print("�������룿(true/false)");
		}while(s.nextBoolean());
		do{	
			System.out.print("�����Ա�����ֵ��");
			double x = s.nextDouble();
			System.out.println("p("+x +") = " + p.evaluate(x));
			System.out.print("�������㣿(true/false)");
		}while(s.nextBoolean());
	}
}
