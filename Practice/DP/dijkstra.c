//dijkstra algorithm
#include<stdio.h>
#include<stdlib.h>
#define inf 9999
int cost[100][100],visited[100],min_idx,dist[100];
int main(){
	int n,source;
	printf("Enter no of nodes :");
	scanf("%d",&n);
	printf("Enter the adj matrix:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&cost[i][j]);
		}
		visited[i] = 0;
		dist[i] = inf;
	}
	printf("Enter the source :");
	scanf("%d",&source);
	dist[source] = 0;
	for(int i=0;i<n-1;i++){
		int mini = inf;
		for(int j=0;j<n;j++){
			if((dist[j] < mini) && (visited[i] != 1)){
				min_idx = j;
				mini = dist[j];
			}
		}
		visited[min_idx] = 1;
		for(int j=0;j<n;j++){
			if((visited[j] != 1) &&(cost[min_idx][j]!=0)&&(dist[min_idx] != inf) &&((dist[min_idx] + cost[min_idx][j]) < dist[j])){
				dist[j] = dist[min_idx] + cost[min_idx][j];

			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d -> %d ==> %d\n",source,i,dist[i]);
	}
	return 0;
}
