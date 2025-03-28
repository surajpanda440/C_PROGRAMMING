// Dijkstra's Algorithm in C

#include <stdio.h>
#define INFINITY 9999
#define MAX 10

void Dijkstra(int Graph[MAX][MAX], int n, int start);

void Dijkstra(int Graph[MAX][MAX], int n, int start) 
{
  int cost[MAX][MAX], distance[MAX], pred[MAX];
  int visited[MAX], count, mindistance, nextnode, i, j;

  // Creating cost matrix
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (Graph[i][j] == 0)
        cost[i][j] = INFINITY;
      else
        cost[i][j] = Graph[i][j];

  for (i = 0; i < n; i++) 
  {
    distance[i] = cost[start][i];
    pred[i] = start;
    visited[i] = 0;
  }

  distance[start] = 0;
  visited[start] = 1;
  count = 1;

  while (count < n - 1) 
  {
    mindistance = INFINITY;

    for (i = 0; i < n; i++)
      if (distance[i] < mindistance && !visited[i]) {
        mindistance = distance[i];
        nextnode = i;
      }

    visited[nextnode] = 1;
    for (i = 0; i < n; i++)
      if (!visited[i])
        if (mindistance + cost[nextnode][i] < distance[i]) {
          distance[i] = mindistance + cost[nextnode][i];
          pred[i] = nextnode;
        }
    count++;
  }

  // Printing the distance
  for (i = 0; i < n; i++)
    if (i != start) {
      printf("\nDistance from source to %d :- %d", i, distance[i]);
    }
}
void printmatrix(int n,int Graph[MAX][MAX])
{
	printf("\nprinting the matrix.....\n");
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<n;j++)
		{
			printf("\t%d ",Graph[i][j]);
		}
	printf("\n");
   }
}
int main() {
  int Graph[MAX][MAX], i, j, n, u;
  u = 0;
  printf("enter the number of nodes = ");
  scanf("%d",&n);
  printf("enter data into the matrix ....\n");
	for(i=0;i<n;i++)
	{
	    printf("\nenter data in %dth row ....\n",i);
		for(j=0;j<n;j++)
		{
		    printf("enter to [%d] <--> [%d] waight =  ",i,j);
			scanf("%d",&Graph[i][j]);
		}
	}
	printmatrix(n,Graph);
    Dijkstra(Graph, n, u);

  return 0;
}
