#include<stdio.h>
int main()
{
	int i,k,flag=0;
	char str[100];
	printf("enter the word here");
	scanf("%s",&str);
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("the length of the string is: %d",i);
	printf("\n");
	
	k=1;
	while(k<=i)
	{
		if(str[k]!=str[i])
		{
			flag=1;
			
		}
		k++;
		i--;
		
	}
	
	if(flag==1)
	{
		printf(" not a palindrome");
	}
	else
	{
		printf("a palindrome");
	}
	return 0;
}
