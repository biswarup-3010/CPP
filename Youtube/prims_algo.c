//Prims Algorithm
#include<stdio.h>
int cost[100][100],visited[100]={0},n,ne=1,u,v,minimum_cost=0,i,mini;
int main(){
	printf("Enter no of nodes : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&cost[i][j]);
			if((cost[i][j] == 0) && (i!=j)) cost[i][j] = 9999;
		}
	}
	visited[1] = 1;
	while(n>ne){
		for(i=1,mini=9999;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(cost[i][j] < mini && visited[i] != 0){
					mini = cost[i][j];
					u = i;
					v = j;
				}
			}
		}
		if(visited[u] == 0 || visited[v] == 0){
			minimum_cost += mini;
			ne++;
			visited[v] = 1;
		}
		cost[u][v] = cost[v][u] = 9999;
	}
	printf("Minimum cost = %d ",minimum_cost);
	return 0;
}
