public class Polynomial {
	private int degree; // 多项式的最高次
	private double[] coeffs; // 多项式各项的系数

	// 构造方法
	public Polynomial(int d, double[] c) {
		if ( (d > 0) && (d + 1 == c.length) ) {
			degree = d;
			coeffs = c;
		}
	}
	public Polynomial(){
		degree = -1;
	}
	
	public Polynomial(int d){ //给定degree创建Polynomial对象
		if (d > 0) {
			degree = d;
			coeffs = new double [degree + 1];
		}
	}
	
	//set & get for degree

	public void setDegree(int d) {
		if (d > 0) {
			degree = d;
			coeffs = new double [degree + 1];
		}
	}
	
	public int getDegree(){
		return degree;
	}
	
	//set for Coefficients
	public void setCoeff(int i, double v) {
		if (degree == -1) {
			return;
		}
		if (i > 0 && i<= degree) {
			coeffs[i] = v;
		}
	}
	
	public void setCoeffs(double[] vs){
		if (degree == -1) {
			coeffs = vs;
			degree = vs.length - 1;
		}else if (degree == vs.length - 1) {
			coeffs = vs;
		}
	}
	
	//String representation for Polynomial object
	public String toString() {
		String p;
		p = " p(x)=";
		for (int i = degree; i > 0; i--) {
			if (coeffs[i] != 0) {
				p += coeffs[i] + "*x^" + i + " +";
			}
		}
		if (coeffs[0] != 0) {
			p += coeffs[0];
		}
		if (p.charAt(p.length() - 1) == '+') {
			p = p.substring(0, p.length() - 1);
		}
		return p;
	}

  //evaluate polynomial given variable x
	public double evaluate(double x) {
		double result = 0;
		for (int i = degree; i > 0; i--) {
			result = (result + coeffs[i]) * x;
		}
		result += coeffs[0];
		System.out.print("p(" + x + ") = " + result  );
		return result;
	}
	

}
