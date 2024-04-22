#include<iostream>
using namespace std;
int Linear_search(int *arr,int n){
    for(int i=0;arr[i]!='\0';i++)
        if(n==arr[i])
            return i;
    return -1;
}
int main(){
    int n,arr[]={1,2,3,4,5,6,7,8,9,10};
    cin>>n;
    cout << Linear_search(arr,n) << endl;
    return 0;
}