#include<iostream>
using namespace std;
// int gcd(int x,int y){
//     if(y!=0) return gcd(x,x%y);
//     return x;
// }
void rev(string s){
    if(!s.length()) return;
    string res=s.substr(1);
    rev(res);
    cout<<s.at(0);
}
int main(){
    rev("purawsiB");
}