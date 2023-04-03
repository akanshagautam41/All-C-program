// lesser or keepit A>=90

/*#include<stdio.h>

int main()
{
	int a;
	printf("\n find the value of a:");
	scanf("%d",&a);
	if(a>=90)
	{
	printf("\n  lesser ");
}
else
{
printf("\n keepit");
}
return 0;
}*/

/*#include<stdio.h>

int main()
{
	int a;
	printf("\n enter the value:");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("\n its even number");
	}
	else
	{
		printf("\n its odd number");
	}
}*/


#include<stdio.h>

main()
{
	int n;
	printf("\n enter the value:");
	scanf("%d",&n);
	
	if((n%4==0)||(n%400==0)||(n%100==0))
	{
		printf("\n it leap year");
	}
	else
	{
		printf("\n it not leap year");
	}
	return 0;
}
