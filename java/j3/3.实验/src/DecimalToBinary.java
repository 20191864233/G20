import java.util.Scanner;


public class DecimalToBinary {

	public static void main(String[] args) {
		//��ʼ��
		Scanner s = new Scanner(System.in);
		double d;
		
		for(;;) {
			//����һ��ʮ������d
			System.out.print("Enter a decimal > ");
			d = s.nextDouble();
			
			
			//��d��Ϊ��������intPart��С������remainPart
			int intPart = (int)d;
			double remainPart = d - (double)intPart;
			
			
			//��intPartת��Ϊ������
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
			
			
			//��remainPartת��Ϊ������
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
			
			
			//��ת��֮����������ֺ�С�����ֺϲ����
			System.out.print("ʮ������ " + d + " ת��Ϊ������Ϊ");
			
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
			
			
			//ѭ��
			System.out.print("����ת����Y/N����");
			String str1 = s.next();
			String str2 = "n";
			if(str1.equalsIgnoreCase(str2)) {
				break;
			}
		}
		
	}

}
