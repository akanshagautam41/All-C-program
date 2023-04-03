#include<stdio.h>

int main()
{
	int a[3],i;
	printf("Enter Array element:\n");
	for(i=1;i<=3;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Display the element result:\n");
	for(i=1;i<=3;i++)
	{
		printf("%d",a[i]);
	}
	
	printf("\n");
}
