#include<bits/stdc++.h>
using namespace std;
void printNameNTimes(int n){
    cout<<"Biswa"<<endl;
    if(n>0) printNameNTimes(--n);
}
void print1ToN(int i,int n){
    cout<<i++<<endl;
    if (i!=n) print1ToN(i,n);
}
void printNTo1(int n){
    if(n>0) cout<<n--<<endl;
    printNTo1(n);
}
void printNTo1b(int n){
    if(n>0) printNTo1(n--);
    cout<<n<<endl;
}
int SumN(int n){
    if(n==1) return 1;
    return n + SumN(n-1);
}
void revArr(int arr[],int i,int n){
    if(i>=n) return;
    int t = arr[i];
    arr[i] = arr[n];
    arr[n] = t;
    revArr(arr,++i,--n);
}
int main(){
    // printNameNTimes(5);
    // int n;
    // cin>>n;
    // print1ToN(1,n+1);
    // printNTo1(n);
    // printNTo1b(n);
    // cout<<SumN(n)<<endl;
    int arr[] = {1,2,3,4,5};
    revArr(arr,0,4);
    for(int i=0;i<5;i++) cout<<arr[i]<<endl;
    return 0;
}