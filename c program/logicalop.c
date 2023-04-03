// logical operator

/*#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("%d", a<b&&a>b);
	printf("\n%d", a>b&&a>b);
	printf("\n%d", a>b&&a<b);
	printf("\n%d", a<b||a>b);
	printf("\n%d", a<b||a<b);
	printf("\n%d", a>b||a>b);
	printf("\n%d", !(a<b));
	printf("\n%d", !(a>b));
	return 0;
}*/

// assignment operator

#include<stdio.h>
int main()
{
	int a=10;
	a+=a;  //20
	printf("show the value of A: %d",a);
	return 0;
}
