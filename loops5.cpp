#include <stdio.h>
int main ()
{
	int i;
	for (i=100;i>=0;i%2=0;i=i-2)
	{
		printf("%d \n",i);
	}
	return 0;
}
