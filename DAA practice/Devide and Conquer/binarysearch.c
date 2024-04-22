#include<stdio.h>
#define cin(i) scanf("%d",&i)
#define cout(i)printf("%d\n",i)
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int bi_search(int start,int end,int t){
    if(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] == t) return mid;
        else if(arr[mid] > t) return bi_search(start,mid-1,t);
        return bi_search(mid+1,end,t);
    }
    return -1;
}
int main(){
    int n;
    cin(n);
    cout(bi_search(0,9,n));
    return 0;
}