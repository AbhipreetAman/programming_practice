#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int visited[MAX];
int a[MAX][MAX];
int n;



void readadjmatrix()
{
    int i, j;
    printf("enter the no of vertices\n");
    scanf("%d", &n);
    printf("enter adjacency matrix\n");
    for (i = 1; i <= n; i++)
       { for (j = 1; j <= n; j++)
         scanf("%d",&a[i][j]);
       }
}

void dfs(int v)
{
    int w;
    visited[v] = 1;
    printf("%d->", v);
    for (w = 1; w <= n; w++)
    {
        if (visited[w] == 0 && a[v][w] == 1)
        {  
            dfs(w);
        }
    }
    printf("\n");
}
int main()
{
    int start;
    readadjmatrix();
    printf("enter the starting vertex\n");
    scanf("%d", &start);
    dfs(start);
    return 0;
}