#include<stdio.h>
#define n 4
#define f(i,x,n) for(int i=x;i<n;i++)
int x[4];
int G[n][n] = { 
    {0, 1, 0, 1}, 
    {1, 0, 1, 1}, 
    {0, 1, 0, 1}, 
    {1, 1, 1, 0} 
    };
void next_col(int );
int main(){
    f(i,0,n) next_col(i);
    f(i,0,n) printf("%d ",x[i]);
    return 0;
}
void next_col(int k){
    x[k]=1;
    f(i,0,k) if(G[i][k]!=0 && x[k]==x[i]) x[k] = x[i]+1;

    // x[k]=1;
    // for(int i=0;i<k;i++){
    //     if(G[i][k]!=0 && x[k]==x[i]){
    //         x[k]=x[i]+1;
    //     }
    // }
}