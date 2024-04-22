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
#define int                             long long int
#define in(arr_name)                    for(int &i:arr) cin>>i;
#define fr(i,a,b)                       for(int i=a;i<b;i++)
#define fe(i,arr)                       for(int &i:arr)
#define ipt                             cin>>
#define opt                             cout<<
#define pb                              push_back
#define no                              cout<<"NO"<<endl;
#define yes                             cout<<"YES"<<endl;
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
#define keep_silence_ninja_is_here void ninja_solve()
#define Lets_Start                      signed main(){ int test; ipt test; w(test) ninja_solve(); return 0; }
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
using namespace std;
//     .
//     .
//     .
//     .
//     .
//     .
//     .
//ITS_NINJA_CODER_30
keep_silence_ninja_is_here;
//ITS_NINJA_CODER_30
Lets_Start
//ITS_NINJA_CODER_30
keep_silence_ninja_is_here{
    //Lets Code here -->
}
















/*


#include <iostream>
#include<vector>
using namespace std;
#define MAX 100
int find(int mat[MAX][MAX], int n, int k)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans.push_back(mat[i][j]);
        }
    }
    sort(ans.begin(), ans.end());
    return ans[k - 1];
}
int main()
{
    int mat[MAX][MAX] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {24, 29, 37, 48}, {32, 33, 39, 50}};
    int n = 4;
    int k = 7;
    cout << find(mat, n, k);
    return 0;
}*/