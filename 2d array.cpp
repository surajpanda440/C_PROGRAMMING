#include <stdio.h>
int main()
{
	int r,c;
	printf("Enter rows and columns= ");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],re[r][c];
	int i,j;
	printf("Enter the data in the two dimensional array=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter data in the second array.\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			re[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The output \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",re[i][j]);
		}
		printf("\n");
	}
}
