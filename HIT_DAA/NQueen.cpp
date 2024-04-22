#include<iostream>
using namespace std;
int graph[100][100];

bool isSafe(int x,int y,int n){
    for(int i=0;i<x;i++){
        if(graph[i][y]==1){
            return false;
        }
    }
    int row = x, col = y;
    while(row>=0 && col>=0) {
        if(graph[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(graph[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int x, int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(x,col,n)){
            graph[x][col]=1;

            if(nQueen(x+1,n)){
                return true;
            }
            graph[x][col]=0;
        }
    }
    return false;
}
void display(int n){
    if(nQueen(0,n)){
        for(int i=0;i<n;i++){
            for(int k=0;k<n;k++) cout<<".--.";
            cout<<endl;
            for (int j = 0; j < n; j++){    
                if(graph[i][j]==0) cout<<"|   ";
                else cout<<"| "<<"Q";
            }
            cout<<"|"<<endl;
        }
        for(int k=0;k<n;k++) cout<<"'--'";
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    display(n);
    return 0;
}
