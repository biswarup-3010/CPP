//krushkal
#include<stdio.h>
#include<stdlib.h>
#define inf 9999
int cost[100][100],parent[100],n,ne=1,a,u,b,v,mini_cost = 0;
int find(int);
int union_(int,int);
int main(){
	printf("Enter no of nodes : ");
	scanf("%d",&n);
	printf("Enter adj matrix :\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&cost[i][j]);
			if((i!=j) && (cost[i][j] == 0)) cost[i][j] = inf;
		}
	}
	while(n>ne){
		int mini = inf;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(cost[i][j] < mini){
					mini = cost[i][j];
					u = a = i;
					v = b = j;
				}
			}
		}
		u = find(u);
		v = find(v);	
		if(union_(u,v)==1){
			ne++;
			mini_cost += mini;
		}
		cost[a][b] = cost[b][a] = inf;
	}
	printf("Minimum cost : %d\n",mini_cost);
	return 0;
}
int find(int x){
	while(parent[x])
	x = parent[x];
	return x;
}
int union_(int m,int n){
	if(m!=n){
		parent[m] = n;
		return 1;
	}
	return 0;
}
