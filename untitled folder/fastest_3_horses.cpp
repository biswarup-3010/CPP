#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    for(int k=0;k<4;k++)
        for(int i=k;i>=0;i--){
            for(int j=3;j>=i;j--){
                cout<<arr[3-j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}