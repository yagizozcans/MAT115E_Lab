#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void CreatingMatrix(int matrixLength);

int main(int argc, char *argv[]) {

	int matrixLength;
	printf("Please enter matrix length -> ");
	scanf("%d",&matrixLength);

	CreatingMatrix(matrixLength);
	
	return 0;
}

void CreatingMatrix(int matrixLength)
{
	srand(time(NULL));
	int i = 0;
	int j = 0;
	int matrix[matrixLength][matrixLength];
	for(i = 0; i < matrixLength; i++)
	{
		for(j = 0; j < matrixLength; j++)
		{
			matrix[i][j] = rand() % 10;	
			printf("%d,",matrix[i][j]);
		}
		printf("\n");
	}
	
	int major = 0;
	int majorSum = 0;
	for(major = 0; major < matrixLength; major++)
	{
		majorSum += matrix[major][major];
		printf("%d ",matrix[major][major]);
	}
	printf("Major sum is -> %d\n",majorSum);
	
	int minor = 0;
	int minorSum = 0;
	for(minor = 0; minor < matrixLength; minor++)
	{
		printf("%d ",matrix[matrixLength-minor-1][minor]);
		minorSum += matrix[matrixLength-minor-1][minor];
	}
	printf("Minor sum is -> %d\n",minorSum);
	
	
	if(majorSum > minorSum)
	{
		int rowSum[matrixLength];
		int r = 0;
		int c = 0;
		for(r = 0; r < matrixLength; r++){
			rowSum[r]=0;
			for(c = 0; c < matrixLength; c++){
				rowSum[r] += matrix[r][c];
			}
			printf("%d. row's sum of number is -> %d\n",r,rowSum[r]);
		}	
	}else if(minorSum > majorSum)
	{
		int columnSum[matrixLength];
		int r = 0;
		int c = 0;
		for(r = 0; r < matrixLength; r++){
			columnSum[r]=0;
			for(c = 0; c < matrixLength; c++){
				columnSum[r] += matrix[c][r];
			}
			printf("%d. column's sum of number is -> %d\n",r,columnSum[r]);
		}	
	}else{
		int totalSum = 0;
		int r = 0;
		int c = 0;
		for(r = 0; r < matrixLength; r++){
			for(c = 0; c < matrixLength; c++){
				totalSum += matrix[r][c];
			}

		}	
		printf("Total sum of number is -> %d\n",totalSum);
	}
}

