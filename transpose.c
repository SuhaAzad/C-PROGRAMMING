lude <stdio.h>
int main()
{
	int i,j,m,n;
	int x[10][10];
	printf("enter row numbers: ");
	scanf("%d",&m);
	printf("enter column numbers: ");
	scanf("%d",&n);
	printf("enter the matrix ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("\n");
	
	printf("the matrix is as follows:\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",x[i][j]);
		}
	printf("\n");
	}
	
