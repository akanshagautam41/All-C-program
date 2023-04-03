#include<stdio.h>

main()
{
	int x,y;
	printf("\n find the value of X:");
	scanf("%i",&x);
	printf("\n find the value of y:");
	scanf("%i",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("/n after swapping value \n x:%i \n y:%i",x,y);
}
