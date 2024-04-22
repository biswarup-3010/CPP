#include<iostream>
using namespace std;
void print_Z(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||j==n-i+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter number of rows :";
    cin>>n;
    print_Z(n); 
    return 0;
}