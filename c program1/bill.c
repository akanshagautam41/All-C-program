#include<stdio.h>

main()
{
	int quantity;
	float bill,rate;
	printf("\n enter the rate:");
	scanf("%f",&rate);
	
	printf("\n enter the quantity:");
	scanf("%i",&quantity);
	bill=rate*quantity;
	printf("\n total is: %.2lf",bill);
	return 0;
}
