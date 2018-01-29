#include<stdio.h>
void main()
{
	int n,i;
	int count=1;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
	
	if(n%i==0){
	count=0;
} }
     if(count==1) 	
	printf("%d is a prime no",n);
	else
	printf("%d is a not a prime no",n);
}

