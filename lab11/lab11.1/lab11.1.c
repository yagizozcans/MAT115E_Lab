#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void StringConverter(char *str, char prmtr, int *index, int *rest);

int main() {
	
	char str[100];
	char parameter;
	int index;
	int rest;
	
	printf("please enter the string -> ");
	scanf("%s",str);
	
	getchar();
	printf("please enter the parameter -> ");
	scanf("%c",&parameter);
	
	StringConverter(str,parameter,&index,&rest);
	
	printf("index is %d\n",index+1);
	
	int k = 0;
	for(k = index+1; str[k] != '\0'; k++)
	{
		printf("%c",str[k]);
	}
	
	return 0;
}

void StringConverter(char *str, char prmtr, int *index, int *rest)
{
	int i = 0;
	int j = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == prmtr)
		{
			*index = i;
			j = i;
			break;
		}
	}
}
