#include<iostream>
using namespace std;
void display(int *arr,int n){
    for(int i=0;i<n;i++) 
        cout<<arr[i]<<" ";
    
    cout<<endl;
}
void insertion_sort(int *arr,int n){
    for(int i=1;i<n;i++){
        int min=arr[i];
        int j=i-1;
        while(j>=0&&min<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=min;
    }   
}
int main(){
    int arr[]={24,6,2,7,8,2,4,55,7,23,5};
    int size=(sizeof(arr)/sizeof(arr[0]));
    display(arr,size);
    insertion_sort(arr,size);
    display(arr,size);
    return 0;
}