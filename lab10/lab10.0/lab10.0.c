#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define j 4
#define i 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int FindTheMatrix(int matrix[i][j]);

int main(int argc, char *argv[]) {
	
	int matrix[i][j] = {{1,1,0,0},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}};
	
	int matrix2[i][j] = {{1,1,0,0},{0,1,0,0},{0,1,1,1},{0,0,0,0},{0,0,0,1}};
	
	printf("First matrix -> %d\n",FindTheMatrix(matrix));
	printf("Second matrix -> %d",FindTheMatrix(matrix2));
	
	return 0;
}

int FindTheMatrix(int matrix[i][j])
{
		int iPos = 0,jPos=0;
	
	while(iPos != i && jPos != j)
	{
		bool rightway = false;
		bool downway = false;
		if(iPos + 1 < i)
		{
			if(matrix[iPos + 1][jPos] == 1)
			{
			iPos++;
			printf("[%d , %d]\n",iPos,jPos);
			rightway = true;
			continue;
			}
		}
		if(jPos +1 < j)
		{
			if(matrix[iPos][jPos+1] == 1)
			{
			jPos++;
			printf("[%d , %d]\n",iPos,jPos);
			downway = true;
			continue;
			}
		}
		if(iPos == i-1 && jPos == j-1)
		{
			return 1;
		}else if(rightway == false && downway == false){
			return 0;
		}
	}
}
