#include <stdio.h>
int search(int array[], int n, int x)
{
    
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}
int main()
{
    int array[100];
    int x;
    int n;
    printf("enter the size of the array = ");
    scanf("%d",&n);
    printf("Enter %d elements: ", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }   
    printf("\nEnter the elemnt you want to search in array = ");
    scanf("%d",&x);
    
    int result = search(array, n, x);
    if (result == -1)
    {
        printf("Element is not found");
    }
    printf("Element found at index: [ %d ]", result);
    return 0;
}
