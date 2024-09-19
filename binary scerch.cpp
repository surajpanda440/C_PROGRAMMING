#include<stdio.h>
int binarysearch(int arr[],int n,int val)
{
     int start=0;
     int end=n;
     int mid;
     while(start<=end)
     {
     	mid = (start+end)/2;
     	if(arr[mid]==val){
     		printf("FOUND\n");
     		return mid;
		 }
		 else if(arr[mid]>val){
		 	end = mid-1;
		 }
		 else{
		 	start=mid+1;
		 }
	 }  
     return 0;  
}
int main(){
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++)
    {
		scanf("%d",&arr[i]);
	}
	int val,result;
	printf("Enter the number you want to search in array\n");
	scanf("%d",&val);
	result = binarysearch(arr,n,val);
	printf("found at position [%d]",result);
	return 0;
}
