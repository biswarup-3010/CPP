#include<iostream>
using namespace std;
int main(){
    string s="BISWARUP BANERJEE";
    // for(int i=0;i<s.length();i++){
    //     if(s.at(i)>='a' && s.at(i)<='z') continue;
    //     s.at(i)+=32;
    // }
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
}