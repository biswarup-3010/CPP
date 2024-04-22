#include<stdio.h>
int arr[100];
void mergesort(int ,int );
void merge(int,int,int);
int main(){
	int n;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	mergesort(0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
void mergesort(int start,int end){
	if(start<end){
		int mid = (start + end)/2;
		mergesort(start,mid);
		mergesort(mid+1,end);
		merge(start,mid,end);
	}
}
void merge(int start,int mid,int end){
	int n1 = mid - start + 1;
	int n2 = end - mid;
	int leftarr[100],rightarr[100];
	for(int i = 0;i<n1;i++){
		leftarr[i] = arr[start + i];
	}
	for(int i=0;i<n2;i++){
		rightarr[i] = arr[mid + 1 + i];
	}
	int i=0,j=0,k=start;
	while(i<n1 && j<n2){
		if(leftarr[i] < rightarr[j]){
			arr[k] = leftarr[i];
			i++;
		}
		else {
                        arr[k] = rightarr[j];
                        j++;
                }
		k++;
	}
	while(i<n1){
              	arr[k] = leftarr[i];
		k++;
		i++;
	}
	while(j<n2){
		arr[k] = rightarr[j];
		k++;
		j++;
	}
}














