#include<stdio.h>
int ack(int,int);
int main()
{
	int m,n;
	printf("enter value for m and n: ");
	scanf("%d%d",&m,&n);
	printf("the ackermann fucntion of %d and %d is: %d ",m,n,ack(m,n));
	return 0;
}
int ack(int m,int n)
{
	if(m==0)
	return(n+1);
	if(m>0 && n==0)
	return(ack(m-1,1));
	if(m>0 && n>0)
	return(ack(m-1,ack(m,n-1)));
}
