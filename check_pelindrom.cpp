#include<stdio.h>
int main()
{
	int low,end;
	printf("enter the strting number = ");
	scanf("%d",&low);
	printf("enter the ending number = ");
	scanf("%d",&end);
	for(int i=low;i<=end;i++)
	{
		int temp=i,rev=0;
		while(temp>0)
		{
			rev=(rev*10)+temp%10;
			temp=temp/10;
		}
		if(rev==i)
		{
			printf("\n%d is a pelindrom number ",i);
		}
		else
		{
			printf("\n%d is not a pelindrom number ",i);
		}
	}
}
