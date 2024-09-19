//bubble sort_algorithum......

#include<stdio.h>    
void print(int a[], int n) //function to print array elements  
{  
    int i;
	for (i = 0; i < n; i++) 
	{
	    printf("[%d] Element --> %d",i, a[i]); 
		printf("\n");	
	}         
}  
 void bubble(int a[], int n) // function to implement bubble sort  
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 }  
int main ()    
{    
    int i, j,n,temp;
   printf("enter the size of the array =  ");
   scanf("%d",&n);
   int a[n];
   printf("\nEnter %d elements into the array : ", n);
   printf("\n__________________________________");
   for(i=0;i<n;i++)
   {
   	 printf("\nenter [ %d ] element :- ",i);
   	 scanf("%d",&a[i]);
   }           
    printf("printing Before sorting array elements are :- \n");  
    print( a, n);  
    bubble( a, n);  
    printf("\nAfter sorting array elements are :- \n");    
    print( a, n);  
}    
