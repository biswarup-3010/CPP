#include<stdio.h>
#define cin(n) 	scanf("%d",&n);
#define cout(n) printf("%d ",n);
#define end 	printf("\n");
int graph[100][100],dist[100];
int main(){
	int n;
	cin(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin(graph[i][j])
			if(graph[i][j] == 0) graph[i][j] = 9999;
		}
	}
	dist[n-1] = 0;
	for(int i=n-2;i>=0;i--){
		dist[i] = 9999;
		for(int j=i;j<n;j++){
			int q = graph[i][j] + dist[j];
			if(dist[i]>q){
				dist[i] = q; 
			}
		}
	}
	cout(dist[0])
	end
	return 0;
}
