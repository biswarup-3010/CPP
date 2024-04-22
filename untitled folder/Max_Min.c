#include<stdio.h>
void Max_Min(int arr[],int i,int j,int max,int min){
    if(i == j) max=min=[0];
    else if(i==j-1){
        if(arr[i]>arr[j])
    }
}
int main(){
    int arr[] = {32,43,1,5,-5,23,3,-133,32,0,122},n,i,j,max=0,min=0;
    n = sizeof(arr)/sizeof(arr[0]);
    Max_Min(arr,0,n-1,max,min);
    printf("Maximum = %d\nMinimum = %d",max,min);
}