#include<iostream>
using namespace std;
// int partition(int arr[],int p,int r){
//     int x=arr[r];
//     int i=p-1;
//     for(int j=p;j<r;j++){
//         if(arr[j]<=x){
//             i=i+1;
//             int t= arr[i];
//             arr[i]=arr[j];
//             arr[j]=t;
//         }
//     }
//     int t = arr[i+1];
//     arr[i+1]=arr[r];
//     arr[r]=t;
//     return i+1;
// }

#define f(i,x,y) for(int i=x;i<y;i++)
// int partition(int arr[],int p,int r){
//     int i=p-1;
//     int x=arr[r];
//     f(j,p,r){
//         if(arr[j]<=x){
//             i++;
//             int t= arr[i];
//             arr[i]=arr[j];
//             arr[j]=t;
//         }
//     }
//     i++;
//     int t=arr[i];
//     arr[i]=arr[r];
//     arr[r]=t;
//     return i;
// }


// int partition(int arr[],int p,int r){
//     int x=arr[r];
//     int i=p-1;
//     for(int j=p;j<r;j++){
//         if(arr[j]<=x){
//             i++;
//             int t=arr[i];
//             arr[i]=arr[j];
//             arr[j]=t;
//         }  
//     }
//     i++;
//     int t=arr[r];
//     arr[r]=arr[i];
//     arr[i]=t;
//     return i;
// }

















int partition(int arr[],int p,int r){
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(arr[j]<x){
            i++;
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
        
    }
    i++;
    int t=arr[r];
    arr[r]=arr[i];
    arr[i]=t;
    return i;
}




































void Q_sort(int arr[],int p,int r){
    if(p<r){
        int q=partition(arr,p,r);
        Q_sort(arr,p,q-1);
        Q_sort(arr,q+1,r);
    }
}
int main(){
    int arr[]={7,2,4,1,30,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    Q_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}