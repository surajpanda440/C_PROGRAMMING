//binary search......
#include<stdio.h>
void create(int arr[],int n)
{
	int i;
	printf("\nenter elements in assending order :");
	for(i=0;i<n;i++)
	{
		printf("\nenter the %d element = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n-printing the array --");
	for(i=0;i<n;i++)
	{
		printf("\nthe [%d] element = %d ",i,arr[i]);
	}
}
void scerch(int arr[],int n,int key)
{
	int i=0,flag=0;
	int j=n,mid;
	while(i<=j && flag==0)
	{
		mid=(i+j)/2;
		if(arr[mid]==key)
		{
			flag=1;
			printf("\nyour element was found at position :- [%d]",mid);
		}
		else if(arr[mid]>key)
		{
			j=mid-1;
		}
		else
		{
			i=mid+1;
		}
	}
	if(flag==0)
	{
		printf("\nelement not found..... ");
	}
	
}
int main()
{
	int key,n;
	printf("enter the size of the array = ");
	scanf("%d",&n);
	int arr[n];
	create(arr,n);
	printf("\nenter the number to be scerch = ");
	scanf("%d",&key);
	scerch(arr,n,key);
}
