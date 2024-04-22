#include<stdio.h>
#include<limits.h>
int m[6][6],s[6][6],n=5,d[]={2,3,4,5,8,2};
// int d[]={5, 4, 6,2,7};
void mat_Chain_mul();
int main(){
    mat_Chain_mul();
    printf("Results : \n");
    printf("\n-M matrix-\n");
    printf("\n----------------------\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(m[i][j]<10) printf("| %d ",m[i][j]);
            else if(m[i][j]<100) printf("| %d",m[i][j]);
            else if(m[i][j]<1000) printf("|%d",m[i][j]);
            if(j==n) printf("|");
        }
        printf("\n----------------------\n");
    }
    printf("\n----------------------\n");
    printf("\n-S matrix-\n");
   printf("\n----------------------\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("| %d ",s[i][j]);
            if(j==n) printf("|");
        }
        printf("\n----------------------\n");
    }
    printf("\n----------------------\n");
    printf("Minimum cost = %d\n",m[1][n]);
    return 0;
}
void mat_Chain_mul(){
    for(int i=1;i<=n;i++){
        m[i][i]=0;
    }
    for(int l=2;l<=n;l++){
        for(int i=1;i<=n-l+1;i++){ 
            int j=i+l-1;
            m[i][j]=INT_MAX;
            for(int k=i;k<=j-1;k++){
                int q=m[i][k]+m[k+1][j]+(d[i-1]*d[k]*d[j]);
                if(q<m[i][j]){
                    
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
}




// {5,4,6,2,7}