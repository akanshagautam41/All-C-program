// vowel consonent..

#include<stdio.h>

int main()
{
	char op;
	printf(" \n enter any alphabet:");
	scanf(" %c",&op);
	
	
	if(op=='a'||op=='e'||op=='i'||op=='o'||op=='u')
	{
		printf("\n it is vowel");
		
	}
	else
	{
		printf("\n it is consonent");
	}
	return 0;
}
