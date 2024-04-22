#include<stdio.h>
#define cin(n) 		scanf("%d",&n);
#define cout(n) 	printf("%d ",n);
#define end         	printf("\n");
int graph[100][100];
int main(){
	int n;
	cin(n)
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			cin(graph[i][j])
			if((i!=j) && (graph[i][j] == 0)){
				graph[i][j] = 9999;
			}
		}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(graph[i][j]>(graph[i][k]+graph[k][j])){
					graph[i][j] = graph[i][k]+graph[k][j];
				}
			}
		}
	}
	printf("\nThe shortest path maatrix is as follows : \n ");
	for(int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			cout(graph[i][j])		 	 }
		end
	}
	return 0;
}
