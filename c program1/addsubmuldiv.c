#include<stdio.h>

int main()
{
	int a,b,add,sub,mul,div,mod;
printf("\n enter the value of a & b:");
	scanf("%i %i",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
    mod=a%b;
printf("add %i \n sub %i \n mul %i \n div %i \n mod %i",add,sub,mul,div,mod);
return 0;
}
