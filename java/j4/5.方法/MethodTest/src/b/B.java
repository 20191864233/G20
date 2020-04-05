package b;


public class B {
	public static void main(String[] args) {
		A a = new A(10);
		
		Point p = new Point(10, 20);
		System.out.println("before called, p = " + p);
		a.add(p);
		System.out.println("after called, p = " + p);
		
		a.add(3);
		a.add(new Point());
	}
	
}
