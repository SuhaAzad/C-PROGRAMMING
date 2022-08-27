#include <stdio.h>
int main()
{
	int i,j,m,n;
	int x[10][10],y[10][10],sum[10][10];
	printf("enter row numbers: ");
	scanf("%d",&m);
	printf("enter column numbers: ");
	scanf("%d",&n);
	printf("enter the 1st matrix ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("\n");
	
	printf("the first matrix is as follows:\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",x[i][j]);
		}
	printf("\n");
	}
	
	printf("enter the 2nd matrix ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	printf("\n");
	
	printf("the second matrix is as follows:\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",y[i][j]);
		}
	printf("\n");
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=x[i][j]+y[i][j];
		}
    }
	printf("\n");
	printf("the sum of the above given matrices is:\n ");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",sum[i][j]);
		}
	printf("\n");
	}
	return 0;
}
