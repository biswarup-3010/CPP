// Bellman Ford Algorithm
#include<stdio.h>
int edg[100][3],dist[100];
int main(){
	int nodes,edges=0;
	printf("Enter no of nodes :");
	scanf("%d%d",&nodes,&edges);
	printf("Enter the values :\nSource - destination - weight\n");
	for(int i=0;i<edges;i++){
		scanf("%d%d%d",&edg[i][0],&edg[i][1],&edg[i][2]);
	}
	for(int i=0;i<nodes;i++){
		dist[i] = 9999;
	}
	printf("Enter the source :");
	int source;
	scanf("%d",&source);
	dist[source] = 0;
	for(int i=0;i<nodes-1;i++){
		for(int j=0;j<edges;j++){
			int u = edg[j][0];
			int v = edg[j][1];
			int w = edg[j][2];
			if((dist[u] != 9999) && (dist[v] > (dist[u] + w))){
				dist[v] = dist[u] + w;
			}
		}
	}
	for(int i=0;i<nodes;i++){
		printf("%d -> %d ==> %d\n",source,i,dist[i]);
	}
	for(int j=0;j<edges;j++){
                 int u = edg[j][0];
                 int v = edg[j][1];
                 int w = edg[j][2];
                 if((dist[u] != 9999) && (dist[v] > (dist[u] + w))){
                                printf("Negaative cycle present");
				return 0;
                 }
        }
	printf("No negative cycle");
	return 0;
}
