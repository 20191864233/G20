package a;

public class PointTest {

	public static void main(String[] args) {
		Point p1 = new Point(10,94);
		System.out.println("p1 = (" + p1.getX() + ", " + p1.getY() + ")");
		p1.add(10, 20);

		Point p2 = new Point();
		System.out.println("p2 = (" + p2.getX() + ", " + p2.getY() + ")");

		double d = p1.distance(p2);
		System.out.println("p1��p2�ľ��룺" + d);
		
		Rectangle r = new Rectangle(p1,100,200);
		System.out.println("r��λ��Ϊ(" + r.origin.getX() + ", " + r.origin.getY() + "),���Ϊ" + r.width + ",�߶�Ϊ" + r.height);
	}
}
