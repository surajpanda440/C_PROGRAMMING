//linner search........
#include <stdio.h>
void create(int arr[],int n)
{
	int i,key;
	printf("\nadd element to the array ");
	for(i=0;i<n;i++)
	{
		printf("\nenter the %d element to the array = ",i);
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
	int flag=0;
	int i;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			flag=1;
			printf("\nyour %d value has scerched :\n",key);
			printf("\nposition :- [%d]",i);
		}	
    }
    if(flag==0)
		{
			printf("\nelement not found....");
    	}
}
int main()
{
	int n,key;
	printf("enter the size of the array = ");
	scanf("%d",&n);
	int arr[n];
	create(arr,n);
	printf("\nenter the value to scerch = ");
	scanf("%d",&key);
	scerch(arr,n,key);
	return 0;
}
