import java.util.Scanner;


public class MaxMinDistance{
	public static void main(String[] args){
		
		
		System.out.println("本程序能计算出输入的n个点中距离最长的两个点和距离最短的两个点。\n");
			
		Scanner s = new Scanner(System.in);
		
		System.out.print("输入点的个数> " );	
		int number = s.nextInt();

		//创建Point类型的数组，以存放后面将要输入的number个Point对象
		//填充代码【1】数组名称为points
		Point[] points = new Point[number];


		int x = 0,y = 0;
		//接收输入的点的坐标
		System.out.println("依次输入各点的坐标");
		for (int i = 0; i < number; i++){
			System.out.print("输入第" +  (i+1)+ "个点的坐标（横纵坐标之间用空格分开）> ");
			x = s.nextInt();
			y = s.nextInt();
			//根据接收的x和y坐标创建Point对象，并存放在数组的相应位置
			//填充代码【2】
			points[i] = new Point(x,y);


		
		}
		
		//输出Point数组中的number个点
		System.out.println("你输入的点为：");
		for(int i = 0; i < number; i++){
		    //填充代码【3】
			System.out.println(points[i]);
		
		}
	
	
		//计算点之间的距离
		Point p1 = points[0], p2 = points[1]; //用于记录最长距离的两个点
		double maxDistance= points[0].distance(points[1]);
		double minDistance = maxDistance;
		Point p3 = points[0], p4 = points[1]; //用于记录最短距离的两个点
		//此处计算number个点中的最长和最短距离
		//填充代码【4】
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

		
		System.out.println("点 "+p1 + "到"+p2 + "之间的距离最长，为: " + maxDistance);
		System.out.println("点 "+p3 + "到"+p4 + "之间的距离最短，为: " + minDistance);
		
	}
}