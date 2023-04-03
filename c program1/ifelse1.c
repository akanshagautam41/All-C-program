#include<stdio.h>

int main()
{
	int a;
	printf("Enter any age:");
	scanf("%d",&a);
	
	if(a>=18)
	{
		printf("\n you are eligible");
	}
	
	else
	{
		printf("\n you are not eligible ");
	}
	
	return 0;
}
