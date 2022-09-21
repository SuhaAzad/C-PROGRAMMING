#include<stdio.h>
int main()
{
	char a[100];
	int i=0,flag=0;
	printf("enter the word");
	scanf("%s",&a);
	char *p=&a[0];
	char *q=&a[0];
	
	while(*p!='\0')
	{
		i++;
		p++;
	}
	p--;
	printf("the length of the string is %d",i-1);
	
	while(*q<=*p)
	{
		if(*q==*p)
		{
			q++;
			p--;
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
	return 0;
}
