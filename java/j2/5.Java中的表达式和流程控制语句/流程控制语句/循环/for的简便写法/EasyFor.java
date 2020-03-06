public class EasyFor{
	public static void main(String[] args){
	    int[] data = {1,2,3,4,5,6,7,8,9,10};
	    System.out.println("a.length = " + data.length);
	    int sum = 0;
	    for(int i:data){
		    sum = sum + i;
	    }
	    System.out.println("sum = " + sum);
		
		String[] strs = {"Today","Is","Friday"};
		String str = "";
		for(String s:strs){
			str += s;
		}
		System.out.println(str);
    }
}