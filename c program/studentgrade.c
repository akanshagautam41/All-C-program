#include<stdio.h>
int main()

{
	int score;
	
printf("Enter The Grade of student:");
scanf("%d",&score);

if(score<90)
if(score<80)
if(score<70)
if(score<60)
if(score<50)
if(score<30)
{
	printf("If Score 90 Above A grade\n:");
}
else
{
	printf("if score less in 90 is b grade\n");
}
else
if (score<80)
{
	printf("if score 80 above B grade:");
}
else
{
	printf("if score less in 80 is c grade");
}
else
if(score<70)
{
	printf("if score 70 above c grade:");
}
else
{
printf("if score less in 70 is d grade");	
}
else
if(score<60)
{
	printf("if score 60 above d grade:");
}
else
{
printf("if score less in 60 is e grade");	
}
else
if(score<50)
{
printf("if score 50 above e grade:");	
}
else
{
printf("if score less in 50 is f grade");	
}
else
if(score<30)
{
printf("if score 30 above f grade:");	
}
else
{
printf("if score less in 30 is fail ");	
}
}
