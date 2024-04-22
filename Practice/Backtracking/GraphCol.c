//Graph colouring
#include<stdio.h>
void next_col(int);
int x[10] = {0},graph[10][10];
int main(){
	int n;
	printf("Enter the no of nodes : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&graph[i][j]);
			if(i==j) graph[i][j] = 0;
		}
	}
	for(int i=1;i<=n;i++){
		next_col(i);
	}
	for(int i = 1;i<=n;i++){
		printf("%d ",x[i]);
	}
}
void next_col(int k){
	x[k] = 1;
	for(int i=1;i<=k;i++){
		if((graph[k][i] == 1) && (x[i] == x[k])){
			x[k] = x[i] + 1;
		}
	}	
}
