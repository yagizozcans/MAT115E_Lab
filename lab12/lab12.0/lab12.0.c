#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Encryption(char *s);

int main(int argc, char *argv[]) {
	FILE *wordsTXT = NULL;
	wordsTXT = fopen("words.txt","r");
	FILE *encryptedTXT = NULL;
	encryptedTXT = fopen("encrypted.txt","w");
	char words[50];
	if(wordsTXT != NULL && encryptedTXT != NULL)
	{
			while(!feof(wordsTXT))
	{
		fgets(words,50,wordsTXT);	
		Encryption(words);
		printf("%s",words);
		fputs(words,encryptedTXT);
	}
	fclose(wordsTXT);
	fclose(encryptedTXT);
	}else{
		printf("File couldn't found");
	}
	return 0;
}

void Encryption(char *s)
{
	int i = 0;
	for(i = 0; s[i] != '\0'; i++)
	{
		if((s[i] >= 'a' && s[i] < 'z') ||s[i] >= 'A' && s[i] < 'Z')
		{
				s[i] += 1;
		}else{
			if(s[i] == 'z')
			{
				s[i] = 'a';
			}
			if(s[i] == 'Z')
			{
				s[i] = 'A';
			}
		}
	}
}
