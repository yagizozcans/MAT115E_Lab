#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	void TriangleType(int edge1, int edge2, int edge3);
	
	void TriangleType(int edge1, int edge2, int edge3)
	{
		if((abs(edge1-edge3) < edge2 && edge2 < abs(edge1+edge3)) && (abs(edge2-edge3) < edge1 && edge1 < abs(edge2+edge3)) && (abs(edge1-edge3) < edge2 && edge2 < abs(edge1+edge3)))
		{
			if(edge1 != edge2 && edge1 != edge3 && edge2 != edge3)
			{
				printf("This triangle is scaelene.");
			}else if((edge1 == edge2 && edge1 != edge3) || (edge1 == edge3 && edge1 != edge2) || (edge2 == edge3 && edge2 != edge1))
			{
				printf("This triangle is isosceles.");
			}else if(edge1 == edge2 && edge2 == edge3){
				printf("This triangle is equilateral.");	
			}
		}else{
			printf("This is not an triangle");
		}
	}
	
	int main()
	{
		int edge1,edge2,edge3;
		
		printf("Enter first edge length -> ");
		scanf("%d",&edge1);
				
		printf("Enter second edge length -> ");
		scanf("%d",&edge2);
				
		printf("Enter third edge length -> ");
		scanf("%d",&edge3);
		
		TriangleType(edge1,edge2,edge3);
		return 0;
	}

