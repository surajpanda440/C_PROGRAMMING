//knapsac 0/1_algorithum....

#include<stdio.h>
int max(int a, int b) 
{
   if(a>b)
   {
      return a;
   } 
   else 
   {
      return b;
   }
}
int knapsack(int W, int wt[], int val[], int n)
 {
   int i, w;
   int knap[n+1][W+1];
   for (i = 0; i <= n; i++) 
   {
      for (w = 0; w <= W; w++) 
	  {
         if (i==0 || w==0)
            knap[i][w] = 0;
         else if (wt[i-1] <= w)
            knap[i][w] = max(val[i-1] + knap[i-1][w-wt[i-1]], knap[i-1][w]);
         else
            knap[i][w] = knap[i-1][w];
      }
   }
   return knap[n][W];
}
int main() 
{
   int n;
   int W;
   printf("enter the maximum waight :- ");
   scanf("%d",&W);
   printf("\nhow many value/waight you want to entered :- ");
   scanf("%d",&n);
   int val[n];
   int wt[n];
   for(int i=0;i<n;i++)
   {
   	printf("enter the value = ");
   	scanf("%d",&val[i]);
   }
   printf("\nenter the waight according to the value \n");
   for(int i=0;i<n;i++)
   {
   	printf("enter the waight :- ");
   	scanf("%d",&wt[i]);
   }
   
   printf("\nThe maximum profit is : [ %d ]", knapsack(W, wt, val, n));
   return 0;
}
