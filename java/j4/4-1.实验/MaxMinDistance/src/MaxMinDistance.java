import java.util.Scanner;


public class MaxMinDistance{
	public static void main(String[] args){
		
		
		System.out.println("�������ܼ���������n�����о������������;�����̵������㡣\n");
			
		Scanner s = new Scanner(System.in);
		
		System.out.print("�����ĸ���> " );	
		int number = s.nextInt();

		//����Point���͵����飬�Դ�ź��潫Ҫ�����number��Point����
		//�����롾1����������Ϊpoints
		Point[] points = new Point[number];


		int x = 0,y = 0;
		//��������ĵ������
		System.out.println("����������������");
		for (int i = 0; i < number; i++){
			System.out.print("�����" +  (i+1)+ "��������꣨��������֮���ÿո�ֿ���> ");
			x = s.nextInt();
			y = s.nextInt();
			//���ݽ��յ�x��y���괴��Point���󣬲�������������Ӧλ��
			//�����롾2��
			points[i] = new Point(x,y);


		
		}
		
		//���Point�����е�number����
		System.out.println("������ĵ�Ϊ��");
		for(int i = 0; i < number; i++){
		    //�����롾3��
			System.out.println(points[i]);
		
		}
	
	
		//�����֮��ľ���
		Point p1 = points[0], p2 = points[1]; //���ڼ�¼������������
		double maxDistance= points[0].distance(points[1]);
		double minDistance = maxDistance;
		Point p3 = points[0], p4 = points[1]; //���ڼ�¼��̾����������
		//�˴�����number�����е������̾���
		//�����롾4��
		double d = 0;
		for(int i = 0; i < points.length - 1; i++) {
			for(int j = i + 1; j < points.length; j++) {
				d = points[i].distance(points[j]);
				if (d >= maxDistance) {
					p1 = points[i];
					p2 = points[j];
					maxDistance = d;
				}
			}
		}
		
		double md = 0;
		for(int i = 0; i < points.length - 1; i++) {
			for(int j = i + 1; j < points.length; j++) {
				md = points[i].distance(points[j]);
				if (md <= minDistance) {
					p3 = points[i];
					p4 = points[j];
					minDistance = md;
				}
			}
		}

		
		System.out.println("�� "+p1 + "��"+p2 + "֮��ľ������Ϊ: " + maxDistance);
		System.out.println("�� "+p3 + "��"+p4 + "֮��ľ�����̣�Ϊ: " + minDistance);
		
	}
}