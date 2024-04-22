#include<stdio.h>
int x[10];
int place(int,int);
int abs(int);
void NQ(int,int);
int main(){
	int n;
	printf("Enter the no of Queens : ");
	scanf("%d",&n);
	NQ(1,n);
	return 0;
}
int abs(int n){
	if(n<0) return -n;
	return n;	
}
// int place(int i,int k){
// 	for(int j=1;j<k;j++){
// 		if((abs(x[j]-i) == abs(j-k)) ||(x[j] == i)) return 0;
// 	}
// 	return 1;
// }
int place(int i,int k){
	for(int j=1;j<=k-1;j++){
		if((abs(x[j]-i) == abs(j-k)) || (x[j] == i)) return 0;
	}
	return 1;
}
void NQ(int k,int n){
	// for(int i=1;i<=n;i++){
	// 	if(place(i,k) == 1){
	// 		x[k] = i;
	// 		if(k == n) {
	// 			for(int j=1;j<=n;j++) printf("%d ",x[j]);
	// 			printf("\n");
	// 		}
	// 		else NQ(k+1,n);
	// 	}
	// }poa
	for(int i=1;i<=n;i++){
		if(place(i,k) == 1){
			x[k] = i;
			if(k == n){
				for(int j=1;j<=n;j++) printf("%d ",x[j]);
				printf("\n");
			}
			else NQ(k+1,n);
		}
	}
}
