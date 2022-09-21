#include<stdio.h>
int main()
{
	int i,n,flag=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	
	}
	if(flag==1)
	{
		printf("%d is not a prime number",n);
	}
	else
	{
		printf("%d is a prime number",n);
	}
}
