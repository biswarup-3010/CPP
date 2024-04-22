#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    for(int i=0,j=n-1;i<n/2;i++,j--) {
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for( int i=0;i<n;i++) cout<<" "<<arr[i];
    cout<<endl<<"after reverse:"<<endl;
    reverse(arr,n);
    for( int i=0;i<n;i++) cout<<" "<<arr[i];
    return 0;
}