#include<stdio.h>

int main()
{
	int i,n,m=0,flag=0;
	printf("\n Enter check any number is prime:");
	scanf("%d",&n);
	m=n/2;
	for(i=2 ; i<=m ; i++)
	{
		if(n%i==0)
		{
			printf("\n Number is not prime");
			flag=1;
			break;
		}
		}
	if(flag==0)
	{
		("\n number is prime");

	}
}
