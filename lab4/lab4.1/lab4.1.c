#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int triangletest(int edge1,int edge2,int edge3)
{
	int k = 0;
	k = (((abs)(edge1-edge3)<edge2 && edge2<edge1+edge3) && ((abs)(edge2-edge3)<edge1 && edge1<edge2+edge3) && ((abs)(edge1-edge2)<edge3 && edge3 < edge1+edge2));
	return k;
}

int main(int argc, char *argv[]) {
	int edge1,edge2,edge3;
	
	srand(time(NULL));
	edge1 = 3 + (rand()%8);
	edge2 = 3 + (rand()%8);
	edge3 = 3 + (rand()%8);
	
	printf("First edge -> %d\n",edge1);
	printf("Second edge -> %d\n",edge2);
	printf("Third edge -> %d\n",edge3);
	printf("%d\n",triangletest(edge1,edge2,edge3));
	
	printf("Enter first edge: ");
	scanf("%d",&edge1);
	printf("Enter second edge: ");
	scanf("%d",&edge2);
	printf("Enter third edge: ");
	scanf("%d",&edge3);
	
	printf("First edge -> %d\n",edge1);
	printf("Second edge -> %d\n",edge2);
	printf("Third edge -> %d",edge3);
	
	printf("%d",triangletest(edge1,edge2,edge3));
	
	return 0;
}
