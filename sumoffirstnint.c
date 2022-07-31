#include<stdio.h>
int main()
{
	int i,j,sum=0;
	printf("enter the number");
	scanf("%d",&j);
	
	{
		for(i=1;i<=j;i++)
		{
			sum=sum+i;
			
		}
		printf("sum of first %d numbers is %d",j,sum);
	}
	return 0;
}
