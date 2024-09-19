//activation_selection_problem....

#include <stdio.h>
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
 
    printf("Following activities are selected = ");
    i = 0;
    printf("%d ", i);
 
    for (j = 1; j < n; j++) {
        
        if (s[j] >= f[i]) {
            printf("%d ", j);
            i = j;
        }
    }
}

int main()
{
     int n ;
    printf("enter the size of the array = ");
    scanf("%d",&n);
     printf("\n");
    int s[n];
    int f[n];
    for(int i=0;i<n;i++)
    {
        printf("enter start time of %d element =  ",i);
        scanf("%d",&s[i]);
        printf("enter finish time of %d element =  ",i);
        scanf("%d",&f[i]);
        printf("\n");
    }   
    printMaxActivities(s, f, n);
    return 0;
}
