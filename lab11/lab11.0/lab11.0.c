#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void converter(char *p);

int main(int argc, char *argv[]) {
	
	char str[91];
	
	printf("please enter text -> ");
	
	scanf("%s",str);
	
	converter(str);
	
	printf("%s",str);
	
	return 0;
}

void converter(char *p)
{
	int i;
	for(i = 0; p[i] != '\0'; i++)
	{
		if(p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] -= 32;
		}
		if(p[i] >= 'A' && p[i] <= 'Z')
		{
			p[i] += 32;
		}
	}
}
