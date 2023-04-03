#include<stdio.h>

int main()
{
	char ch;
	printf("\n ENTER A TO Z :");
	scanf("%c",&ch);
	
	for(ch='a'; ch<= 'z' ; ch++)
	{
		printf("\n Alphabet %c",ch);
	}
}
