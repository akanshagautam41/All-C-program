#include<stdio.h>

int main()
{
	int i;
	printf("\n Enter Any Number:");
	scanf("%d",&i);
	
	for(i=0 ; i<50 ; i++)
	
	if(i%2==0)
	{
		printf("\n %d its even number:",i);
	}
	else
	{
		printf("\n %d its odd number:",i);
	}
	return 0;
}
