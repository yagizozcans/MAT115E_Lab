#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int findDigit(int k,int d)
	{
		int count = 0;
		int tempNumber = k;
		while(tempNumber != 0)
		{
			tempNumber = tempNumber/10;
			++count;
		}
		int i;
		int position = -1;
		for(i = 0; i < count; i++)
		{
			int temp = k % 10;
			k = k/10;
			if(temp == d)
			{
				position = i+1;
			}
		}
		return position;
	}
int main() {
	
	int k,d;
	
	printf("Please enter the number -> ");
	scanf("%d",&k);
	
	printf("Please enter the number that will be found -> ");
	scanf("%d",&d);
	
	printf("%d",findDigit(k,d));
	
	return 0;
}
