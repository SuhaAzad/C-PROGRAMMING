#include<stdio.h>
int main()
{
	int i;
	char str[]="hello";
	char *p;
	p=&str;
	while(*p!='\0')
	{
		printf("%c",*p);
		*p++;
	}
	for(i=p-1;i>=0;i--)
	{
		printf("%c",*(p-i));
	}
	
}
