// Belmann Ford Algorithm
#include<stdio.h>
int edge[100][3],dist[100];

int main(){
	int nodes,edges,source;
	printf("Enter no of nodes : "); 
	scanf("%d",&nodes);
	printf("Enter no of edges : ");
	scanf("%d",&edges);
	printf("Enter the source : ");
	scanf("%d",&source);
	printf("Enter edges (source,destination,weight) :\n");
	for(int i=0;i<edges;i++) scanf("%d%d%d",&edge[i][0],&edge[i][1],&edge[i][2]);

	// main algorithm starts here
	for(int i=0;i<nodes;i++) dist[i] = 9999;
	dist[source] = 0;
	for(int i=0;i<nodes-1;i++){
		for(int j=0;j<edges;j++){
			int u = edge[j][0];
			int v = edge[j][1];
			int w = edge[j][2];
			if((dist[u] != 9999) && (dist[v] > (dist[u] + w))){
				dist[v] = dist[u] + w;
			}
		}
	}
	printf("The single source sortest path is as follows :\n");
	for(int i=0;i<nodes;i++) printf("%d -> %d => %d\n",source,i,dist[i]);
	
	// checking for negative cycle 
	for(int j=0;j<edges;j++){
		int u = edge[j][0];
		int v = edge[j][1];
		int w = edge[j][2];
		if((dist[u] != 9999) && (dist[u] + w < dist[v])) {
			printf("\nNegative cycle is present\n");
			return 0;
		}
	}
	printf("\nThere is no presence of Negative cycle\n");
	return 0;
}

