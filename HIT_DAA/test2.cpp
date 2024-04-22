#include<iostream>
using namespace std;
#define f(i,x,n) for(int i=x;i<n;i++)
int board[100][100];
bool is_Safe(int x,int y,int n){
    f(i,0,x) if(board[i][y]==1) return false;
    int r = x, c = y;
    while(r >= 0 && c >= 0 ) if( board[r--][c--]==1) return false; 
    r = x,c = y;
    while(r >= 0 && c < n) if( board[r--][c++]==1) return false; 
    return true;
}
bool NQ(int x,int n){
    if( x >= n ) return true;
    for(int col = 0; col < n ; col++){
        if(is_Safe(x,col,n)){
            board[x][col]=1;
            if(NQ(x+1,n)) return true;
            board[x][col]=0;
        }
    }
    return false;
}
int main(){
    int n; cin>>n;
    NQ(0,n);
    f(i,0,n){ f(j,0,n) cout<<board[i][j]<<" "; cout<<endl; }
    return 0;
}