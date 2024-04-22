#include<iostream>
using namespace std;
void ss(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s.at(0);
    string rest = s.substr(1);
    ss(rest,ans);
    ss(rest,ans+ch);
    ss(rest,to_string(int(ch)));
}
int main(){
    ss("ABC","");
    return 0;
}