//prims algorithm
#include<stdio.h>
#define inf 9999
int graph[100][100],visited[100],ne=1,u,v;
int main(){
	int n;
	printf("Enter no of nodes :");
	scanf("%d",&n);
	printf("Enter the adj matrix :\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&graph[i][j]);
			if((i!=j) && (graph[i][j] == 0)) graph[i][j] = inf;
		}
		visited[i] = 0;
	}
	int source,minimum_cost = 0;
	printf("Enter the source : ");
	scanf("%d",&source);
	visited[source] = 1;
	while(n>ne){
		int mini = inf;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(graph[i][j] < mini && visited[i] == 1){
					mini = graph[i][j];
					u = i;
					v = j;
				}
			}
		}
		if(visited[u] == 0 || visited[v] ==0){
			visited[v] = 1;
			ne++;
			minimum_cost += mini;
		}
		graph[u][v] = graph[v][u] = inf;
	}
	printf("Minimum cost = %d ",minimum_cost);
	return 0;
}
