#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define n 12



int main() {
	int randomNumbers[12];
	
	int negativeCount =0,positiveCount=0;

	int i = 0;
	srand(time(NULL));
	for(i = 0; i < n; i++)
	{
		randomNumbers[i] = rand() % 101 - 50;
		if(randomNumbers[i] > 0)
		{
			positiveCount++;
		}else if(randomNumbers[i] < 0)
		{
			negativeCount++;
		}
		printf("%d. number is -> %d\n",i+1,randomNumbers[i]);
	}
	printf("Negative number count is -> %d\n",negativeCount);
	printf("Positive number count is -> %d\n",positiveCount);
	int k = 0;
	printf("Minimum value in array is -> %d and index is -> ",FindMinimumValue(randomNumbers,&k));
	printf("%d",k+1);
	
	return 0;
}

int FindMinimumValue(int randomNumbers[], int *p){
	int minimumValue = randomNumbers[0];
	int i = 0;
	for(i = 0; i < n; i++)
	{
		if(minimumValue > randomNumbers[i])
		{
			minimumValue = randomNumbers[i];
			*p = i;
		}
	}
	return minimumValue;
}
