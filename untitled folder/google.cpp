#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[20][20];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    int j=0;
    while(j<m){
        if((j+1)%2!=0)
            for(int i=0;i<n;i++)
                cout<<arr[i][j]<<" ";
        else if((j+1)%2==0)
            for(int i=n-1;i>=0;i--)
                cout<<arr[i][j]<<" ";
        j++;
    }
    return 0;
}
