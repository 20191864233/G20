package b;


public class Point {
	//��Ա����
	int x;
	int y;
	
	//���췽��
	public Point() {
		x = 10;
		y = 10;
	}
	
	public Point(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	//getters && setters
	public void setX(int x) {
		this.x = x;
	}
	
	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}

	public int getX() {
		return x;
	}

	//����������֮��ľ���
	public double distance(Point p) {
		double d = 0;
		d = Math.sqrt( (x - p.x) * (x - p.x) + (y - p.y) * (y - p.y) );
		return d;
	}
	
	public Point add(Point p1, Point p2) {
		Point p = new Point();
		p.setX(p1.getX() + p2.getX());
		p.setY(p1.getY() + p2.getY());
		return p;
	}
	
	//toString����
	public String toString() {
		return "(" + x + ", " + y + ")";
	}
}
