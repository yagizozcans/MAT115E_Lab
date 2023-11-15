#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double Maclaurin(int n, double x);

int main() {
	int n;
	double x;
	printf("Please enter n count -> ");
	scanf("%d",&n);
	printf("Please enter pow -> ");
	scanf("%lf",&x);
	printf("%lf",Maclaurin(n,x));
	return 0;
}

double Maclaurin(int n, double x)
{
	int i;
	double sum = 0;
	for(i = 0; i < n; i++)
	{
		int faktor = 1;
		int j;
		if(i == 0 || i == 1)
			{
				faktor = 1;
			}
		else{	
		for(j = 2; j < i+1; j++)
		{
			faktor = faktor * j;
		}
	}

		sum += pow(x,i) / faktor;
	}
	return sum;
}
