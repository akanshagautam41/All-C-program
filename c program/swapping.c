// swapping    a=5, b=6     a=6, b=5  (with 3 variable)

#include<stdio.h>
main ()
{
int a,b,c;
printf("\n enter a value:");
scanf("%d",&a);
printf("\n enter b value:");
scanf("%d",&b);

c=a;
a=b;
b=c;
printf("\n after swapping the value of \n a:%d \n b:%d",a,b,c);
return 0;
}
