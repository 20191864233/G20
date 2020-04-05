package a;

public class PointTest {

	public static void main(String[] args) {
		Point p1 = new Point(10,94);
		System.out.println("p1 = (" + p1.getX() + ", " + p1.getY() + ")");
		p1.add(10, 20);

		Point p2 = new Point();
		System.out.println("p2 = (" + p2.getX() + ", " + p2.getY() + ")");

		double d = p1.distance(p2);
		System.out.println("p1到p2的距离：" + d);
		
		Rectangle r = new Rectangle(p1,100,200);
		System.out.println("r的位置为(" + r.origin.getX() + ", " + r.origin.getY() + "),宽度为" + r.width + ",高度为" + r.height);
	}
}
