#include<stdio.h>
int main()
{
	int n=1,f=1,i;
	printf("enter any number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factional is %d",f,n);
}
