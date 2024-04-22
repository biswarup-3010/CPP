#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<char> fun(string str){
    vector<char> ans;
    map<char,int> mp;
    for(int i=0;i<str.length();i++){
        if(mp[str[i]] == 0) mp[str[i]] = 0;
        mp[str[i]]++;
    }
    for(auto i : mp){
        if(i.second == 2) ans.push_back(i.first);
    }
    return ans;
}
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    vector<char> v = fun(str);
    vector<char> ans;
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}