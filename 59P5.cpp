#include <stdio.h>
int main()
{
    int i,a, sum;
    float average;
    printf("enter 10 numbers: \n");
    
    for(i=1;i<=10;i++)
	{
		printf("number  %d: ",i);
		scanf("%d",&a);
		sum=sum+a;
	
	}
	average=sum/10;
	printf("%f\n",average);
	printf("%d\n",sum);
	return 0;
}
