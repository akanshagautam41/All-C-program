//find largest number among three numbers

#include<stdio.h>
int main()
{
int a,b,c;
printf("\n ENTER THE Number:");
scanf("%d%d%d",&a,&b,&c);

if(a>b&&a>=c)
{
printf(" is A the largest number.");
	
}
 else if (b>c&&a>=c)
printf(" B is the largest number.");


else
{
	printf("\n C is largest number");
	}

}
