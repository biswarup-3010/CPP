#include<iostream>
#include<string>
using namespace std;
string reverse(string arr,int n){
    for(int i=0;i<n/2;i++){
        char x=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=x;
    }
    return arr;
}
bool check_palindrome(string str){
    return str==reverse(str,str.length());
}
int main(){
    string arr;
    getline(cin,arr);
    check_palindrome(arr)?cout<<"YES\n":cout<<"NO\n";
    return 0;
}