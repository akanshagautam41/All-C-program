#include<stdio.h>

int main()

{
	int a,b;
	char op;
	printf("\n Enter The operator (+,-,*,/)");
	scanf("%c",&op);
	printf("\n Enter Any Value:");
	scanf("%d%d",&a,&b);
	
	
	switch(op)
	{
	
	case 'a': printf(" add %d+%d = %d",a,b,a+b);
	break;
	case 'b': printf("sub %d-%d=%d",a,b,a-b);
	break;
	case 'c': printf("mul %d*%d=%d",a,b,a*b);
	break;
	case 'd': printf("div %d/%d=%d",a,b,a/b);
	break;
	default : printf("wrong value:");
}
}
