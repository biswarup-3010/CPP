#include<stdio.h>
int octal(int n, int ans){
    if(n==0) return ans;
    return ans=(n%8)+(octal(n/8,ans) * 10);
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("%d ",octal(n,0));
    return 0;
}