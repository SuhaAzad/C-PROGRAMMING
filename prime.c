#include<stdio.h>
int main()
{
	
	int i, a,r=1;
	printf("enter number");
	scanf("%d",&a);
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			r=0;
			break;
			}
		
		}
		if(r==1)
		{ 
		    printf("%d is a prime number",a);
		}
		else
		{
		     printf("%d is not prime",a);
		}
	
	return 0;
}
	

