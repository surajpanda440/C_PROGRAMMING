//matrixchin _multiplication....

#include <limits.h>
#include <stdio.h>

int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;

    for (k = i; k < j; k++)
    {
        count = MatrixChainOrder(p, i, k)
                + MatrixChainOrder(p, k + 1, j)
                + p[i - 1] * p[k] * p[j];
 
        if (count < min)
            min = count;
    }
    return min;
}
int main()
{
    int n;
    printf("Eneter the size of the array = ");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
      for(int i=0;i<n;i++)
    {
        printf("enter the %d element =  ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nMinimum number of multiplications is [ %d ]", MatrixChainOrder(arr, 1, n - 1));
    getchar();
    return 0;
}
