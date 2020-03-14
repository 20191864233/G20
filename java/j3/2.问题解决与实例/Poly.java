import java.util.Scanner;

public class Poly{
	public static void main(String[] args){
		//��ʼ��
		Scanner s = new Scanner(System.in);
		int degree;//����ʽ����ߴ�
		double[] coeffs;//����ʽ�ĸ���ϵ��
		String pStr;//����ʽ���ַ�����ʾ
		boolean loop;
		double x;//�Ա���
		
		//����һ������ʽ
		do{
			//�������ʽ����ߴ�ϵ����������
			System.out.print("�������ʽ�����ϵ��:");
			degree = s.nextInt();
			//�������ʽ�����ϵ�������������飩
			coeffs = new double[ degree+1 ];
			for(int i = degree; i >= 0; i--){
				//�����i���ϵ��
				System.out.print("�����" + i + "���ϵ����");
				coeffs[i] = s.nextDouble();
			}
			
			//�������ʽ���ַ�����ʾ��ʽ
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
			System.out.print("����ʽ�������Ƿ���ȷ��true/false����");
			loop = s.nextBoolean();
		}while(!loop);
		
		do{
			//�����Ա���x��ֵ
		    System.out.print("�����Ա���x��ֵ��");
		    x = s.nextDouble();
		
	        //����x�¶���ʽ��ֵ
		    double p = 0;
		    for(int i = degree; i > 0; i--){
			    p = x * (p + coeffs[i]);
		    }
		    p += coeffs[0];
	        System.out.println("p(" + x + ")=" + p);
			System.out.print("�������㣨true/false����");
			loop = s.nextBoolean();
		}while(loop);
	}
}