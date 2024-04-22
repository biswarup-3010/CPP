#include<stdio.h>
int octal(int n){
    if(n==0) return 0;
    return (n%8) + 10 * octal(n/8);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",octal(n));
    return 0;
}