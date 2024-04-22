#include<stdio.h>
#include<stdbool.h>
int traverse_path[100],rear = -1, front = -1,k = 0;
int graph[6][6] = {{0,1,1,0,0,0},
                     {1,0,1,0,0,0},
                     {1,1,0,1,1,0},
                     {0,0,1,0,0,0},
                     {0,0,1,0,0,1},
                     {0,0,0,0,1,0}};
int queue[1000],n;
bool visited[100];
void BFS(int source){
	visited[source] = true;
	queue[++rear] = source;
	while(rear != front){
		int current_node = queue[++front];
		traverse_path[k++] = current_node;
		for(int i=0;i<n;i++){
			if(graph[current_node][i] == 1 && !visited[i]){
				// visited[i] = true;
				// queue[++rear] = i;
				BFS(i);
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d --> ",traverse_path[i]);
	}
}
int main(){
	int source,edges,u,v;
	printf("Enter the no of nodes and edges : ");
	scanf("%d%d",&n,&edges);
	// printf("Enter the adjucent matrix :\n");
	// for(int i=0;i<edges;i++){
	// 	scanf("%d%d",&u,&v);
	// 	graph[u][v] = graph[v][u] = 1;
	// }
	printf("\nEnter the source node :" );
	scanf("%d",&source);
	BFS(source);
	return 0;
}