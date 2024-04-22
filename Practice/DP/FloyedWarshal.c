#include<stdio.h>
int graph[100][100];
int main(){
	int n;
	printf("Enter no of nodes :");
	scanf("%d",&n);
	printf("Enter the adj matrix :\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&graph[i][j]);
			if(i!=j && graph[i][j] == 0) graph[i][j] = 9999;
		}
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(graph[i][j] >(graph[i][k] + graph[k][j])){
					graph[i][j] = graph[i][k] + graph[k][j];
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                       printf("%d ",graph[i][j]);
                }
		printf("\n");
        }
	return 0;
}

