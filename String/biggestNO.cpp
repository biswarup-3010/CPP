#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="10394839012812";
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}