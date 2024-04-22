#include<stdio.h>
#include<limits.h>
int m[6][6],s[6][6],n=4;//d[]={3,5,15,5,10,3},
int d[]={5, 4, 6,2,7};
int main(){
	for(int i=1;i<=n;i++){
		m[i][i] = 0;
	}
	for(int l=2;l<=n;l++){
		for(int i=1;i<=n-l+1;i++){
			int j = l+i-1;
			m[i][j] = INT_MAX;
			for(int k=i;k<=j-1;k++){
				int q = m[i][k] + m[k+1][j] + (d[i-1]*d[k]*d[j]);
				if(q<m[i][j]){
					m[i][j] = q;
					s[i][j] = k;
				}
			}
		}
	}

	printf("\nMatrix M __________\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix S __________\n");
	for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                        printf("%d ",s[i][j]);
                }
                printf("\n");
        }
	printf("\n\nminimum cost %d __________\n",m[1][n]);
}
