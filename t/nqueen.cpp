#include<iostream>
#include<cmath>
#define f(i,x,n) for(int i=x;i<n;i++)
using namespace std;
int ct = 0,x[10];
bool is_safe(int k,int i){ 
    f(j,1,k) if((x[j]==i)||(abs(x[j]-i)==abs(j-k))) return false;
    return true;
}
void nq(int k,int n){
    f(i,1,n+1) {
        if(is_safe(k,i)){
            x[k]=i;
            if(k==n){
                ct++; 
                return;
            }
            else nq(k+1,n);
        }
    }
}
int main(){
    int n;
    cin>>n;
    nq(1,n);
    cout<<ct<<endl;
    return 0;
}