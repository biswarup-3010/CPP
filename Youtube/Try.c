// Matrix chain Multiplication
#include<stdio.h>
int m[10][10],s[10][10],d[]={5,4,6,2,7},n=4;
void print(int arr[][10],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
int main(){
	for(int i=1;i<=n;i++) m[i][i] = 0;
	for(int l=2;l<=n;l++){
		for(int i=1;i<=n-l+1;i++){
			int j = i+l-1;
			m[i][j] = 9999;
			for(int k = i;k<j;k++){
				int q = m[i][k] + m[k+1][j] + (d[i-1]*d[k]*d[j]);
				if(q<m[i][j]){
					m[i][j] = q;
					s[i][j] = k;
				}
			}
		}
	}
	print(m,n);
	printf("\n----------------------\n");
	print(s,n);
	printf("\n----------------------\n");
	printf("Minimum cost = %d\n",m[1][n]);
	return 0;
}	
