public class Point{
	//��Ա����
	private int x;
	private int y;
	
	//���췽��
	public Point(int x, int y){
		this.x = x;
		this.y = y;
	}
	
	public Point(){
	}
	
	//Point������ַ�����ʾ
	public String toString(){
		return "(" + x + "," + y + ")";
	}
	
	//���㵱ǰPoint�����������֮��ľ���
	public double distance(Point p){
		double xx = (x - p.x)*(x - p.x);
		double yy = (y - p.y)*(y - p.y);
		return Math.sqrt(xx + yy);
	}
	
	//get��set����
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