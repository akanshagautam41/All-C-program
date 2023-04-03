/*#include<stdio.h>

int main()
{
	int a,b;
	char op;
	printf("enter any operator:(+,-,*,/)");
	scanf("%c",&op);
	printf(" Enter any two variable:");
	scanf("%d%d",&a,&b);

	switch(op)
	{
		case'a': printf("%d + %d = %d",a,b,a+b);
		break;
		case 'b' : printf("%d - %d= %d",a,b,a-b);
		break;
		case 'c' : printf("%d * %d= %d",a,b,a*b);
		break;
		case'd' : printf("%d / %d= %d",a,b,a/b);
		break;
		default: printf("wrong number");
		break;
	}
	
	
}*/



#include <stdio.h>
  
int main()  
{  
    int a, b , op;  
  
  printf("Enter Any operator");
   printf("Enter any numbers\n");  
   scanf("%d %d %d", &a, &b , &op);
   switch(op)
   {
   	case 1: printf("add %d+%d=%d ",a,b,a+b);
   	break;
   	
   	case 2: printf("sub %d",a,b,a-b);
   	break;
   	
   	case 3: printf("mul %d",a,b,a*b);
   	break;
   	
   	case 4: printf("div %d",a,b,a/b);
   	break;
   	
   	default : printf(" wrong number");
   	break;
   }
  
  return 0;  
}  
