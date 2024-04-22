#include<stdio.h>
int graph[100][100],visited[100];
void dfs(int,int);
int main(){
	int n,vertices,u,v,source;
	printf("Enter no of nodes : ");
	scanf("%d",&n);
	printf("Enter no of vertices : ");
	scanf("%d",&vertices);
	printf("Enter the vertices : \n");
	for(int i=0;i<n;i++){
		visited[i]=0;
		for(int j=0;j<n;j++){
			graph[i][j]=0;//initialise of the graph
		}
	}
	for(int i=0;i<vertices;i++){
		scanf("%d%d",&u,&v);
		graph[u][v] = graph[v][u] = 1;
	}
	printf("Enter the source vertex : ");
	scanf("%d",&source);
	dfs(n,source);
	return 0;
}
void dfs(int n,int source){
	visited[source] = 1;
	printf("%d --> ",source);
	for(int i=0;i<n;i++){
		if((graph[source][i] == 1) && (visited[i] == 0)){
			dfs(n,i);
		}
	}
}
