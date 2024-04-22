#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define cin(n) 	scanf("%d",&n);
#define cout(n) printf("%d ",n);
#define end 	printf("\n");
int x[100];
void print(int arr[],int n){
	for(int i=1;i<=n;i++) cout(arr[i])
	end
}
int abs(int n){
	if(n<0) return -n;
	return n;
}
bool place(int k,int i){
	for(int j=1;j<=k-1;j++){
		if((abs(x[j]-i) == abs(j-k)) || (x[j] == i)) return false;
	}
	return true;
}
void NQ(int k, int n){
	for(int i=1;i<=n;i++){
		if(place(k,i)){
			x[k] = i;
			if(k==n){
				 print(x,n);
			}			
			else NQ(k+1,n);
		}
	}
}
int main(){
	NQ(1,4);
	return 0;
}
