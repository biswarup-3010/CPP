#include<bits/stdc++.h>
using namespace std;
class Solution {
    int ans;
    vector<int> count[1000];
    void BT(int cn,vector<int> ckies,int k){
        if(cn == ckies.size()){
            int maxi = 0;
            for(int i =0;i<k;i++){
                maxi = max(maxi,count[i]);
            }
            ans = min(maxi,ans);
            return ;
        }
        for(int i=0;i<k;i++){
            count[i] += ckies[cn];
            BT(cn+1,ckies,k);
            count[i] -= ckies[cn];
            if(count[i] == 0) break;
        }
    }
public:
    int distributeCookies(vector<int>& cookies, int k) {
        ans = INT_MAX;
        BT(0,ckies,k);
        return ans;
    }
};