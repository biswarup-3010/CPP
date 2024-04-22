#include<stdio.h>
int bi_s(int arr[],int start, int end,int data){
    if(end>=start){
        int mid=start + (end - start )/2;
        if(arr[mid]==data) return mid;
        if(arr[mid]>data) return bi_s(arr,start,mid-1,data);
        return bi_s(arr,mid+1,end,data);
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6},n=6,x;
    printf("Enter the Number :");
    scanf("%d",&x);
    printf("%d",bi_s(arr,0,n-1,x));
    return 0;
}
