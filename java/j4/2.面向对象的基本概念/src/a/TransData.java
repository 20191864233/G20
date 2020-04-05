package a;

public class TransData {
	double data;
	final int JING_DU = 6;
	
	public TransData(double d) {
		data = d;
	}
	
	public String toBinaryForm() {
		String str = "";
		str = intToBinary() + decimalToBinary();
		return str;
	}
	
	public String intToBinary() {
		String str = "";
		int d  = (int)data;
		do {
			str = d % 2 + str;
			d = d / 2;
		}while(d > 0);
		return str;
	}
	
	public String decimalToBinary() {
		String str = ".";
		double d = data - (int)data;
		for (int i = 0; i <= JING_DU; i++) {
			str += (int)(d * 2);
			d = d * 2 - (int)(d * 2);
		}
		return str;
	}

}
