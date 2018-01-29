#include<stdio.h>
void main()
{
	int n,sum=0,c=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		c++;
	}
		printf("%d",c);
		
	
}
