#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void NumberCheck(int n);

int main() {
	int n;
	printf("Enter the number -> ");
	scanf("%d",&n);
	NumberCheck(n);
	return 0;
}

void NumberCheck(int n)
{
	if(n >= 4 && n <= 6)
	{
		printf("The number is %d",n);
	}else{
		int s = n%2;
		switch(s){
			case 0:
				printf("The number is not between in 4 and 6. This number is even.");
				break;
			case 1:
				printf("The number is not between in 4 and 6. This number is odd.");
				break;
		}			
	}
}
