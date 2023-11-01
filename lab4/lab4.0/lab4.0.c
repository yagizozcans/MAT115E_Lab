#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int alfabecheck(char c)
{
	int k = 0;
	k = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	return k;
}

int main(int argc, char *argv[]) {
	
	int r;
	
	srand(time(NULL));
	r = 32 + (rand() % 95);
	
	printf("Random character's ascii -> %d \nRandom character -> %c\n",r,(char)r);
	
	printf("%d\n",alfabecheck((char)r));
	
	char c1;
	
    printf("Enter a character: ");
    
    scanf("%c", &c1);
    
	printf("%d", alfabecheck(c1));
	
	return 0;
}

