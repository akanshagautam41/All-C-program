#include<stdio.h>

void fun();  // declaration

void sum()  // defination

{
	int a,b,sum;
	printf("Enter two number of:\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("total value of two number are addition: %d\n",sum);
}

void sub() 

{
	int a,b,sub;
	printf("Enter two number:\n");
	scanf("%d%d",&a,&b);
	sub=a-b;
	printf("total value of two number are subtraction : %d\n",sub);
}

void mul()  

{
	int a,b,mul;
	printf("Enter two number:\n");
	scanf("%d%d",&a,&b);
	mul=a*b;
	printf("total value of two number are multiplication : %d\n",mul);
}

void div()  

{
	int a,b,div;
	printf("Enter two number:\n");
	scanf("%d%d",&a,&b);
	div=a/b;
	printf("total value of two number are divide: %d\n",div);
}

void main()
{
	sum();
	sub();
	mul();
	div();
	return 0;
}
