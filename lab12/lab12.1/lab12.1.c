#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char* ReverseString(char *str);

int main(int argc, char *argv[]) {
	char str[100];
	FILE *wordsTXT = NULL;
	FILE *wordsTXT2 = NULL;
	wordsTXT = fopen("wordsq2.txt","r");
	wordsTXT2 = fopen("wordsq2.txt","a");
	if(wordsTXT != NULL && wordsTXT2 != NULL)
	{
			while(!feof(wordsTXT))
	{
		fscanf(wordsTXT,"%s",str);
		fprintf(wordsTXT2,"%s\n",ReverseString(str));
		//fputs(str,wordsTXT);
	}
	fclose(wordsTXT);
	fclose(wordsTXT2);
	}
	else{
		printf("File couldn't found");
	}
	return 0;
}

char* ReverseString(char *str)
{
	int i = 0;
	int length = 0;
	for(i = 0; str[i] != '\0'; i++)
		length++;
	char *newStr = (char *) malloc(sizeof(char)*81);
	for(i = 0; i < length+1; i++)
	{
		newStr[i] = str[length-i-1];
	}
	return newStr;
}
