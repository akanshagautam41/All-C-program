#include<stdio.h>

main()
{
	int day,year;
	printf("\n enter  year:");
	scanf("%d",&year);
	printf("\n enter  day:");
	scanf("%d",&day);
	
	year=day/365;
 	printf(" year: %d ",year);
	day=year*365;
	printf("days: %d",day);
	
	 
	return 0;
}
