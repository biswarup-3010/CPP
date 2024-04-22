// #include<iostream>
// #include<cmath>
// #define f(i,x,n) for(int i=x;i<n;i++)
// using namespace std;
// int x[10];
// bool is_safe(int k,int i){
//     f(j,1,k){
//         if((x[j]==i)||(abs(x[j]-i)==abs(j-k))){
//             return false;
//         }
//     }
//     return true;
// }
// void display(int arr[],int n){
//     f(i,1,n+1){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void nq(int k,int n){
//     f(i,1,n+1) {
//         if(is_safe(k,i)){
//             x[k]=i;

//             if(k==n){
//                 display(x,n);
//                 return;
//             }
//             else{
//                 nq(k+1,n);
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     nq(1,n);
//     return 0;
// }

#define vi vector<int>
/*
# |////////////////////\\\\\\\\\\\\\\\\\\\
# |////////////////// || \\\\\\\\\\\\\\\\\
# |////////////////   ||   \\\\\\\\\\\\\\\
# |//////////////||   ||        \\\\\\\\\\
# |////////////  ||   ||          \\\\\\\\ 
# |\\\\\\\\\\\\  ||   ||          ////////  
# |\\\\\\\\\\\\\ ||   ||         /////////
# |\\\\\\\\\\\\\\||   ||||||||||////////<
# |\\\\\\\\\\\\\\\|   ||         \\\\\\\\\
# |\\\\\\\\\\\\\\\\   ||          \\\\\\\\
# |\\\\\\\\\\\\\\\\\  ||          ////////
# |\\\\\\\\\\\\\\\\\\ ||         ////////
# |\\\\\\\\\\\\\\\\\\\||       /////////
# |\\\\\\\\\\\\\\\\\\\||\\\\\\\\\//////
# */
//ITS_NINJA_CODER_30
#include <bits/stdc++.h>
#include<map>
#include<unordered_map>
#define w(t)                            while(t--)
#define in(arr_name)                    for(int &i:arr) cin>>i;
#define fr(i,a,b)                       for(int i=a;i<b;i++)
#define fe(i,arr)                       for(int &i:arr)
#define ipt                             cin>>
#define opt                             cout<<
#define iop(n)                          int n;ipt n;
#define pb                              push_back
#define no                              cout<<"NO"<<endl;
#define yes                             cout<<"YES"<<endl;
#define vi                              vector<int>
#define vvi                             vector<vi>
#define mp(i,j)                         map<i,j>
#define ump(i,j)                        unordered_map<i,j>
#define pr(i,j)                         pair<i,j>
#define ff                              first
#define ss                              second
#define itr                             mp(i,j) :: iterator itr;
#define trMP(m)                         for(it = m.begin();it!=m.end();it++)
#define sz(x)                           x.size();
#define all_val(x)                      x.begin(), x.end()
#define all_val_rev(x)                  x.rbegin(), x.rend()
#define keep_silence_ninja_is_here      void ninja_solve()
class Solution {
public:
    string minimizeStringValue(string s) {
        int n = s.size();
        vi charCount(26, 0); 
        for (char c : s) if(islower(c)) charCount[c - 'a']++;
        string res;
        for (char c : s) {
            if (c == '?') {
                int minChar = -1;
                for (int i = 0; i < 26; i++) {
                    if (charCount[i] == 0) {
                        minChar = i;
                        break;
                    }
                }
                res += (minChar != -1) ? ('a' + minChar) : 'a';
                charCount[minChar != -1 ? minChar : 0]++;
            } else {
                res += c;
                charCount[c - 'a']++;
            }
        }
        return res;
    }
};