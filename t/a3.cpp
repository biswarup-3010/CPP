#include<bits/stdc++.h>
using namespace std;
vector<int> v0,v1;
int abs(int x){ if(x<0)return -x; else return x; }
int minDis(vector<int> v, int c){
    int mindist = INT_MAX,d;
    for(int i : v){
        d = abs(i - c);
        mindist = min(d,mindist);
    }
    return mindist;
}
void pos(int n,string str){
    for(int i = 0;i<n;i++){
        if(str[i]=='1') v1.push_back(i);
        else v0.push_back(i);
    }
}
int solve(int n,string str){
    pos(n,str);
    int total = 0;
    for(int i : v0){
        total += minDis(v1,i);
    }
    return total;
}
int main(){
    string bs;
    int n;
    cin>>n>>bs;
    cout<<solve(n,bs)<<endl;
    return 0;
}
