#include<iostream>
using namespace std;
int binary_search(int *arr,int start,int end,int n){
    if(start<=end) {
        int mid= (start+end)/2;
        if(arr[mid]==n) return mid;
        else if(n>arr[mid]) return binary_search(arr,mid+1,end,n);
        else if(n<arr[mid]) return binary_search(arr,start,mid-1,n);
    }
    return -1;
}
int main(){
    int n,arr[]={1,2,3,4,5,6,7,8,9,10};
    cin>>n;
    cout << binary_search(arr,0,10,n) << endl;
    return 0;  
}