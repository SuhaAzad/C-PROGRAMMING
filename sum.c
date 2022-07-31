#include<stdio.h>
int main()
{
	int i,n,num,sum=0;
	printf("how many numbers you wanna add?");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the number: ");
		scanf("%d",&num);
		sum=num+sum;
	}
	
		printf("the sum is: %d",sum);
	
	return 0;
}
