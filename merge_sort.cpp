//merge sort algorithum....

#include <stdio.h>
void create(int arr[],int size)
{
	int i;
	printf("\nadd element to the array ");
	printf("\n________________________");
	for(i=0;i<size;i++)
	{
		printf("\nenter the %d element to the array = ",i);
		scanf("%d",&arr[i]);
	}
}
void merge(int arr[], int p, int q, int r) 
{
  int n1 = q - p + 1;
  int n2 = r - q;
  int L[n1], M[n2];
  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];
  int i, j, k;
  i = 0;
  j = 0;
  k = p;
  while (i < n1 && j < n2)
   {
    if (L[i] <= M[j])
	{
      arr[k] = L[i];
      i++;
    } else 
	{
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n1) 
  {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) 
  {
    arr[k] = M[j];
    j++;
    k++;
  }
}
void mergeSort(int arr[], int l, int r) 
{
  if (l < r) 
  {
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}
void printarray(int arr[],int size)
{
	for (int i = 0; i < size; i++)
  {
  	printf("\n[%d] element :- %d ",i, arr[i]);
    printf("\n");
  }
}

int main() 
{
	int size;
	printf("enter the size of the array = ");
	scanf("%d",&size);
    int arr[size];
    create(arr,size);
    printf("\n__Printing the unsorted array__:");
    printarray(arr,size);
    mergeSort(arr, 0, size - 1);
    printf("\n__Printing the Sorted array is__: \n");
    printarray(arr, size);
}
