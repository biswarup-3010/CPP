#include<stdio.h>
#include<stdlib.h>
int cost[100][100],parent[100],ne=1,n,mini,u,v,a,b,i,j,minimum_cost=0;
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
int main(){
	scanf("%d",&n);	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&cost[i][j]);
			if((cost[i][j] == 0) && (i!=j)) cost[i][j] = 9999;
		}
	}
	while(ne<n){
		for(i=1,mini=9999;i<=n;i++){
			for(j=1;j<=n;j++){
				if(cost[i][j] < mini){
					mini = cost[i][j];
					u = a = i;
					v = b = j;
				}
			}
		}
		u = find(u);
		v = find(v);
		if(union_(u,v)){
			ne++;
			minimum_cost += mini;
		}
		cost[a][b] = cost[b][a] = 9999;
	}
	printf("Minimum cost = %d",minimum_cost);
	return 0;
}
