package a;

import b.*;
import java.util.Scanner;

public class Test{
	public static void main(String[] args){
		B b = new B();
		b.f();
		C c = new C();
		c.f();
		System.out.println("Test in a");
	}
}