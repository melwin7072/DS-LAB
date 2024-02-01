#include <stdio.h> 
#include <stdlib.h> 
#define INF 999 
int adj[10][10], visited[10], i, j, n, ne = 0, tot = 0; 
int main() 
{ 
 printf("Enter no. of vertices : "); 
 scanf("%d", &n); 
 printf("Enter Adjacency Matrix : "); 
 for (i = 1; i <= n; i++) 
 { 
 visited[i] = 0; 
 for (j = 1; j <= n; j++) 
 { 
 scanf("%d", &adj[i][j]); 
 if (adj[i][j] == 0) 
 adj[i][j] = INF; 
 } 
 }
 while (ne < n - 1) 
 { 
 int min = INF, a = 0, b = 0; 
 for (i = 1; i <= n; i++) 
 { 
 
 for (j = 1; j <= n; j++) 
 { 
 if (adj[i][j] < min) 
 { 
 min = adj[i][j]; 
 a = i; 
 b = j; 
 } 
 } 
 
 } 
 printf("The edge %d -> %d : Cost = %d\n", a, b, min); 
 visited[a] = visited[b] = 1; 
 ne++; 
 tot = tot+min; 
 adj[a][b]=adj[b][a]=INF; 
 } 
 printf("Total cost of Minimum Spanning Tree: %d\n", tot); 
 return 0; 
}