#include<stdio.h>
#define cin(n) 	scanf("%d",&n);
#define cout(n) printf("%d ",n);
#define end 	printf("\n");
int arr[100],graph[100][100];
void next_col(int );
int main(){
	int n;
	cin(n)
	for(int i=0;i<n;i++){
		arr[i] = 0;
		for(int j=0;j<n;j++){
			cin(graph[i][j])
			if(i==j) graph[i][j] = 0;
		}
	}
	//LOGIC
	for(int i=0;i<n;i++){
		next_col(i);
	}
	for(int i=0;i<n;i++) cout(arr[i])
	end
	return 0;
}
void next_col(int k){
	arr[k] = 0;
	for(int i =0;i<k;i++){
		if(graph[k][i] != 0 && arr[i] == arr[k]){
			arr[k] = arr[i] + 1;
		}
	}
}
