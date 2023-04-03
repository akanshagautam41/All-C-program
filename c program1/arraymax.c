#include<stdio.h>

int main()

{

int i,size,max;

printf("Enter array element\n");
scanf("%d",&size);
int a[5];

for (i=1;i<size;i++);
{
	scanf("%d",&a[i]);
}

max=a[0];
//printf("Array element are:");
for (i=1;i<size;i++)
{

if (a[i]>max)
{

	max=a[i];
}

}
	printf("\n %d",max);

return 0;
}
