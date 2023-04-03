// c program to add or concatenate three string
#include<stdio.h>
int main()
{
	char a[20],b[50];
	printf("enter the number:");
	scanf("%s",&a);
	printf("enter the number:");
	scanf("%s",&b);
	strcat(a,b);
	
	printf("find the value \n %s",a);
}
