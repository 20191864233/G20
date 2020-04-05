package b;

public class A {
	private int i;
	
	public A(int i){
		this.i = i;
	}
	
	public int add(int adder) {
		adder += i;
		return adder;
	}
	
	public void add(Point p) {
		p.setX(p.getX() + i);
		p.setY(p.getY() + i);
		return;
	}
	
}
