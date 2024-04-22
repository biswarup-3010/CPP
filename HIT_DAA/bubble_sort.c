#include<stdio.h>
void bubble_sort(int arr[],int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
int main(){
    int arr[]={9,7,5,436,75,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before sort : ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    bubble_sort(arr,n);
    printf("\nAfter sort : ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}
