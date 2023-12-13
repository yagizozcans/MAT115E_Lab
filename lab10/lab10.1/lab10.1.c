#include <stdio.h>
#include <stdlib.h>
#define length 8

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int CarIDs[] = {1002,2176,3201,4204,5512,6309,8841,9004};
	int CarColors[] = {0,1,2,1,2,0,1,0};
	int CarPrices[] = {24000,18000,36000,26000,35000,29000,31000,38000};
	printf("The cars these black and under 30.000$: \n");
	CarPriceCheck(CarIDs,CarColors,CarPrices);
	return 0;
}

int CarPriceCheck(int* CarIDs,int* CarColors, int* CarPrices)
{
	int i = 0;
	for(i = 0; i < length; i++)
	{
		if(CarColors[i] == 0 && CarPrices[i] < 30000)
		{
			printf("ID -> %d\n",CarIDs[i]);
		}
	}
}



