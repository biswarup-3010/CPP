// prim's algorithm
#include<iostream>
#define mv 999
using namespace std;
int cost[10][10],visited[10] = {0},mini,miCost = 0,n,i,j,ne = 1,u,v;
int main(){
    cout<<"Enter no of nodes :";
    cin>>n;
    cout<<"Enter the adj matrix :"<<endl;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++){ 
            cin>>cost[i][j]; 
            if((i!=j)&&(cost[i][j] == 0)) cost[i][j] = mv; 
        }
    }
    visited[1] = 1;
    while(ne < n){
        for(i= 1,mini = mv;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(cost[i][j] < mini && visited[i] != 0){
                    mini = cost[i][j]; 
                    u = i; 
                    v = j; 
                }
            }
        } 
        if(visited[u] == 0 || visited[v] == 0){ 
            visited[v] = 1; 
            ne++;
            miCost += mini; 
        }
        cost[u][v] = cost[v][u] = mv;
    }
    cout<<"Minimum cost = "<<miCost<<endl;
    return 0;
}





/*

0 3 1 6 0 0 
3 0 5 0 3 0
1 5 0 5 6 4
6 0 5 0 0 2
0 3 6 0 0 6
0 0 4 2 6 0
*/