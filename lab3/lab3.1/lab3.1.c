#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265359
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double a, b, c, r;
	
	printf("Please enter the first length of line: ");
	scanf("%lf",&a);
	getchar();
	printf("Please enter the second length of line: ");
	scanf("%lf",&b);
	getchar();
	printf("Please enter the angle between lines: ");
	scanf("%lf",&r);
	getchar();
	
	c = sqrt((pow(a,2)+pow(b,2)) - 2 * a * b * cos((r*pi) / 180));
	
	printf("Third length is %lf \n",c);
	
	double sina , sinb;
	
	sina = (a * sin((r*pi) / 180)) / c;
	sinb = (b * sin((r*pi) / 180)) / c;
	
	printf("SinA is: %lf \n",sina);
	printf("SinB is: %lf \n",sinb);
	
	double ar;
	ar = asin(sina) * 180 / pi;
	 		
	double br;
	br = asin(sinb) * 180 / pi;
	printf("Alpha is: %lf \n", ar);
	printf("Beta is: %lf", br);
	
	return 0;
}
