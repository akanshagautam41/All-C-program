#include<stdio.h>
int main()

{
    int n=1,f=1,i;
	printf("enter any number:");
	scanf("%d",&n);
    
    while (i<=n)
    {
    	f=f*i;
    	i++;
	}
	printf("factional is %d",f,n);
}
