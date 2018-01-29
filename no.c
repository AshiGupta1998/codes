#include<stdio.h>
void main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n==0)
	{
		printf("number is zero");
	}
	else if(n>0)
	{
	printf("number is positive");
    }   
	else
	{
		printf("number is negative");
	}
}

