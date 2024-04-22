#include<stdio.h>
#define INT 999
#define f(i,x,n) for(int i=x;i<n;i++)
void f_w_a(int [][4],int );
int main(){
  int arr[4][4]={ {0,2,1,4}, {2,0,9,3}, {1,9,0,2}, {4,3,2,0} };
  f_w_a(arr,4);
  return 0;
}
void f_w_a(int graph[][4],int n){
  int res[4][4];
  f(i,0,n) f(j,0,n) res[i][j] = graph[i][j];
  f(k,0,n) f(i,0,n) f(j,0,n) if(res[i][j]>res[i][k]+res[k][j]) res[i][j]=res[i][k]+res[k][j];
  f(i,0,n) { f(j,0,n) printf("%d ",res[i][j]); printf("\n"); }
}


// {0,3,INT,5}, {2,0,INT,4}, {INT,1,0,INT}, {INT,INT,2,0} 
