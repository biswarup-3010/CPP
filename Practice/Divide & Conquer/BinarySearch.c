//Binary search
#include<stdio.h>
int arr[10] ={1,2,3,4,5,6,7,8,9,10};
int BinarySearch(int,int,int);
int main(){
	int n;
 	printf("Enter the number to search :");
	scanf("%d",&n);
	int x = BinarySearch(0,9,n);
	if(x == -1) printf("not in the array");
	else printf("Present at position : %d ",x);
	return 0;
}
int BinarySearch(int start,int end,int data){
	if(start <= end){
		int mid = (start + end)/2;
		if(arr[mid] == data) return mid;
		else if(arr[mid] > data) return BinarySearch(start,mid-1,data);
		return BinarySearch(mid+1,end,data);
	}
	return -1;
}
