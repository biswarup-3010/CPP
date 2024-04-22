#include "all_files.cpp"
using namespace std;
int max_in_array(int *arr,int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n,arr[]={24,65,2,1,9,5,0,4};
    n=sizeof(arr)/sizeof(arr[0]);
    int k=max_in_array(arr,n);
    cout<<k<<endl;
    return 0;
}