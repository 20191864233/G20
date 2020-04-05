public class Point{
	//成员变量
	private int x;
	private int y;
	
	//构造方法
	public Point(int x, int y){
		this.x = x;
		this.y = y;
	}
	
	public Point(){
	}
	
	//Point对象的字符串表示
	public String toString(){
		return "(" + x + "," + y + ")";
	}
	
	//计算当前Point对象与给定点之间的距离
	public double distance(Point p){
		double xx = (x - p.x)*(x - p.x);
		double yy = (y - p.y)*(y - p.y);
		return Math.sqrt(xx + yy);
	}
	
	//get和set方法
	public void setX(int x){
		this.x = x;
	}
	public int getX(){
		return x;
	}
	
	public void setY(int y){
		this.y = y;
	}
	public int getY(){
		return y;
	}
	
	
}