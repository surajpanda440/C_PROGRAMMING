//inserction sort algorithum......

#include <stdio.h>
void insert(int a[], int n) 
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j]) 
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
  
void printArr(int a[], int n) 
{  
    int i;
     for (i = 0; i < n; i++) 
	{
	    printf("[%d] Element --> %d",i, a[i]); 
		printf("\n");	
	}  
}  
  
int main()  
{
	int n;
   printf("enter the size of the array =  ");
   scanf("%d",&n);
   int a[n];
   printf("\nEnter %d elements into the array : ", n);
   printf("\n__________________________________");
   for(int i=0;i<n;i++)
   {
   	 printf("\nEnter [ %d ] element :- ",i);
   	 scanf("%d",&a[i]);
   }   
   printf("\nBefore sorting array elements are :- \n");  
   printArr(a, n);  
   insert(a, n);  
   printf("\nAfter sorting array elements are :- \n");    
   printArr(a, n);  
  
    return 0;  
}    
