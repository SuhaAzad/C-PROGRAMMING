#include<stdio.h>
int main()
{
	int i;
	int x[2]={4,2,9};
	int *p=&x[2];
	for(i=2;i>=0;i--)
	{
		
		printf("%d ",*p);
		p--;
	}
	
	return 0;
}
