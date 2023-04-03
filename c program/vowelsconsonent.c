#include<stdio.h>

int main()
{
char alp;
printf("\n Enter The Alphabet:");
scanf("%c",&alp);

if(alp=='a'||alp=='e'||alp=='i'||alp=='o'||alp=='u')
{
	printf("alphabet is Vowels");
}
else
{
	printf("alphabet is consonent");
}
return 0;
}

