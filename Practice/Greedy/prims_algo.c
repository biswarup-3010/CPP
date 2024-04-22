#include<stdio.h>
int graph[100][100],visited[100];
int main(){
	int n,source;
	int ne=1,minimum_cost = 0,u,v;
	printf("Enter no of nodes : ");
	scanf("%d",&n);
	printf("Enter the adj matrix : \n");
	for(int i=1;i<=n;i++){
		visited[i] = 0;
		for(int j=1;j<=n;j++){
			scanf("%d",&graph[i][j]);
			if((i != j) && (graph[i][j] == 0)) graph[i][j] = 9999;	
		}
	}
	visited[1] = 1;
	while(n>ne){
		for(int i=0,mini = 9999;i<=n;i++){
			for(int j=0;j<=n;j++){
				if(graph[i][j] < mini && visited[i] != 1){
					u = i;
					v = j;
					mini = graph[i][j];
				}
			}
			if(visited[u] == 0 || visited[v] == 0){
				minimum_cost += mini;
				visited[v] = 1;
				ne++;
			}
		}
		graph[u][v] = graph[v][u] = 9999;
	}
	printf("Minimum cost = %d",minimum_cost);
	return 0;
}
