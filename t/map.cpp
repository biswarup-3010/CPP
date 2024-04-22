#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cout<<"No of elements : ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x ;
        cout<<"enter element : ";
        cin>>x;
        v.push_back(x);
    }
    unordered_map<int,int> mp;
    for(auto i : v){
        if(mp[i] == 0) mp[i] = 1;
        else mp[i]++;
    }
    for(auto j : mp){
        cout<<"Frecuency of "<< j.first << " is equals to "<<j.second<<endl;
    }
    return 0;
}