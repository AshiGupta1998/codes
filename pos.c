#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the number");
	for(n=1;n<=1000;n++)
	scanf("%d",n);
	for(i=1;i<=n;i++)
	if(i>0)
	{
		printf("number is positive");
	}
	else
	if(i<0)
	{
	printf("number is negative");
    }   
	else
	{
		printf("number is zero");
	}
}

