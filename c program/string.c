#include<stdio.h>
int main()
{
	char str[20];
	printf("enter your name:");
	scanf("%s",&str);
	printf("enter your surname:");
	scanf("%s",&str);
	printf("enter your address:");
	scanf("%s",&str);
	printf("enter your city:");
	scanf("%s",&str);
	
	printf("\n your name is %s",str);
	printf("\n your surnnme is %s",str);
	printf("\n your address is %s",str);
	printf("\n your city is %s",str);
}
