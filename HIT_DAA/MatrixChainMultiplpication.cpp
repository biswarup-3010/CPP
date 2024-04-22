#include<iostream>
#include<climits>
using namespace std;
int arr[10][10],d[10],s[10][10];
void matrix_chain_mul(int n){
    n-=1;
    for(int l = 2;l<=n;l++){
        for(int i=1;i<=n-l+1;i++){
            int j=i+l-1;
            arr[i][j]=INT_MAX;
            for(int k=i; k<=j-1;k++){
                int q=arr[i][k]+arr[k+1][j]+(d[i-1]*d[k]*d[j]);
                if(q<arr[i][j]){
                    arr[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
}
void display(int arr[][10],int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x = arr[i][j];
            if(x<10) cout<<" "<<x<<" ";
            else if(x<100) cout<<" "<<x;
            else if(x<1000) cout<<x;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter no of rows : ";
    cin>>n;
    for( int i=1;i<=n;i++){
        arr[i][i]=0;
        cout<<"Enter value in d["<<i<<"] : ";
        cin>>d[i];
    }
    matrix_chain_mul(n);
    display(arr,n);
    display(s,n);
    return 0;
}