#include<stdio.h>
int main()
{
	int n=1,f=1,i;
	printf("enter you number:");
	scanf("%d",&n);
	
	do 
	{
	     f=f*i;
		 i++;

}
	while (i<=n);
	printf("\n factional is %d",f,n);
}
