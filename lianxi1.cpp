#include <iostream>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double r=0.07,p;
	double sum=0;
	p=pow(1+r,10);
	  sum=p-1;
	  printf("%f\n",sum);
	return 0;
}
