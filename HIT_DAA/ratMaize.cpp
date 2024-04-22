#include<iostream>
using namespace std;
#define f(i,x,n) for( int i=x;i<n;i++)
#define ff(i,j,x,n) f(i,x,n) f(j,x,n)
int maize[100][100],sol[100][100];
bool is_safe(int x,int y,int n){
    if( x<n && y<n && maize[x][y]==1){
        return true;
    }
    return false;
}

bool maize_board(int x,int y,int n){
    if(x==n-1 && y==n-1){
        sol[x][y]=1;
        return true;
    }
    if(is_safe(x,y,n)){
        sol[x][y]=1;
        if(maize_board(x+1,y,n)) {
            return true;
        }
        if(maize_board(x,y+1,n)){
            return true;
        }
        sol[x][y]=0;
        return false;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter no of rows : ";
    cin>>n;
    cout<<"Enter the maize in matrix form : \n";
    ff(i,j,0,n) cin>>maize[i][j];
    cout<<"\n________________________________________________\n";
    maize_board(0,0,n);
    f(i,0,n) {
        f(j,0,n) cout<<sol[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}