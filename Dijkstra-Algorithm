#include<stdio.h>
#include<limits.h>
#define V 5
int minDistance(int dist[],int visited[])
{
    int min=INT_MAX;
    int min_idx;
    for(int v=0;v<V;v++)
    {
        if(visited[v]==0&&dist[v]<=min)
        {
            min=dist[v];
            min_idx=v;
            
        }
    }
    return min_idx;
}
void dijkstra(int graph[V][V],int src)
{
    int dist[V];
    int visited[V];
    for(int i=0;i<V;i++)
    {
        dist[i]=INT_MAX;
        visited[i]=0;
    }
dist[src]=0;
for(int count=0;count<V-1;count++)
{
    int u=minDistance(dist,visited);
    visited[u]=1;
    for(int v=0;v<V;v++)
    {
        if(!visited[v]&&graph[u][v]&&dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
        {
            dist[v]=dist[u]+graph[u][v];
        }
    }
}
printf("Vertex \t Distance from source\n");
for(int i=0;i<V;i++)
{
    printf("%d\t%d\n",i,dist[i]);
}

}
int main()
{
    int graph[V][V];
    printf("Enter the adjacency matrix:\n");
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }
    dijkstra(graph,0);
    return 0;
}
