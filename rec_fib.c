#include<stdio.h>
int rec_fib(int);
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	printf("the factorial of %d is: %d",n,rec_fib(n));
	return 0;
	
}
int rec_fib(int n)
{
	if(n==0 || n==10)
	return(1);
	else
	return(n*rec_fib(n-1));
}
