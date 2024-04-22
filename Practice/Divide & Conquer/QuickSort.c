// QuickSort algorithm
#include<stdio.h> 
int arr[100];
int partition(int,int);
void QuickSort(int,int);
int main(){
	int n;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	QuickSort(0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

int partition(int low,int high){
	int pivot = arr[high];
	int i = low - 1;
	for(int j=low;j<high;j++){
		if(pivot > arr[j]){
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	i++;
	int temp = arr[i];
	arr[i] = arr[high];
	arr[high] = temp;
	return i;
}

void QuickSort(int start,int end){
	if(start<end){
		int p = partition(start,end);
		QuickSort(start,p-1);
		QuickSort(p+1,end);
	}	
}












