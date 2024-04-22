#include<stdio.h>
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int binarySearch(int , int ,int );
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",binarySearch(0,9,n));
}
int binarySearch(int start,int end,int data){
    if(start <= end) {
        int mid = (end + start )/2;
        if(arr[mid] == data) return mid;
        else if(arr[mid] < data) return binarySearch(mid+1,end,data);
        return binarySearch(start,mid-1,data);
    }
    return -1;
}