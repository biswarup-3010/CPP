#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define inf 	9999
#define cin(n)	scanf("%d",&n);
#define cout(n) printf("%d ",n);
#define end 	printf("\n");
// dijkstra algorithm
int graph[100][100],dist[100],min_idx,min_dist;
bool visited[100];
int main(){
	int n;
	cin(n)
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin(graph[i][j])
		}
		dist[i] = inf;
		visited[i] = false;
	}
	int source=0;
	cin(source)
	dist[source] = 0;
	for(int i=0;i<n-1;i++){
		min_dist = inf;
		for(int k=0;k<n;k++){
			if((dist[k]<min_dist) && (!visited[k])){
				min_dist = dist[k];
				min_idx = k;
			}
		}
		visited[min_idx] = true;
		for(int i=0;i<n;i++){
			if((!visited[i]) && (graph[min_idx][i]) && (dist[min_idx] != inf) && (graph[min_idx][i] + dist[min_idx] < dist[i])){
				dist[i] = dist[min_idx] + graph[min_idx][i];
			}
		}
	}	
	for(int i =0;i<n;i++) printf("\n%d -> %d = %d",source,i,dist[i]);
	end
	return 0;
}
