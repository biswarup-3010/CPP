#include<iostream>
using namespace std;
int main(){
    int n,m,arr[5][5];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    cout<<"main matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<"transpose\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<arr[j][i]<<" ";
        cout<<endl;
    }
    return 0;
}