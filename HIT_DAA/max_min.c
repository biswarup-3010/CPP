#include<stdio.h>
#include<limits.h>
int max(int *arr, int res, int n){
    if (n==0) return res;
    else if(res<arr[0]) res=arr[0];
    return max(arr+1,res,n-1);
}
int min(int *arr, int res, int n){
    if (n==0) return res;
    else if(res>arr[0]) res=arr[0];
    return min(arr+1,res,n-1);
} 
int main(){
    int arr[]={1,2,3,4,5,6},n=6;
    printf("Maximum = %d \nMinimum = %d\n",max(arr,INT_MIN,n),min(arr,INT_MAX,n));
    return 0;
}