#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int graph[100][100],dist[100],min_dist,min_idx;
bool visited[100];
#define inf 9999
int main(){
	int n,source;
	printf("Enter no of nodes :");
	scanf("%d",&n);
	printf("Enter the adj matrix :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;i++){
			scanf("%d",&graph[i][j]);
		}
		dist[i] = inf;
		visited[i] = false;
	}
	printf("Enter the source:");
	scanf("%d",&source);
	dist[source] = 0;
	// main algorithm starts here
	for(int i=0;i<n-1;i++){
		min_dist = inf;
		for(int j=0;j<n;j++){
			if(!visited[j] && dist[j]<min_dist){
				min_dist = dist[j];
				min_idx = j;
			}
		}
		visited[min_idx] = true;
		for(int k=0;k<n;k++){
			if(!visited[k] && graph[min_idx][k] && dist[min_idx] != inf && graph[min_idx][k] + dist[min_idx] < dist[k]){
				dist[k] = graph[min_idx][k] + dist[min_idx];
			}
		}
	}
	for(int i=0;i<n;i++) printf("\n%d -> %d => %d",source,i,dist[i]);
	return 0;
}
/*
6
0 4 0 0 0 0
4 0 8 0 0 0
0 8 0 7 0 4
0 0 7 0 9 14
0 0 0 9 0 10
0 0 4 14 10 0
0
*/
