#include<stdio.h>
void main()
{
	int n,dig;
	int r=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		dig=n%10;
		r=r*10+dig;
		n=n/10;
	}
	
	if(r==n)
	printf("%d is a palindrome",n);
	else
	printf("%d is not a palindrome",n);
}


