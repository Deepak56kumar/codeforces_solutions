#include<bits/stdc++.h>
#define nline "\n"
using namespace std;
    vector<int>dp;
    long long solve(vector<int>&coins,int amt){
        if(amt==0) return 0;
        if(dp[amt]!=-1) return dp[amt];
        long long mn=INT_MAX;
        for(int i=0;i<coins.size();i++){
            if(coins[i]<=amt){
                mn=min(mn,solve(coins,amt-coins[i]));
            }
        }
       
    return  dp[amt]=mn+1;
    }
    long long coinChange(vector<int>& coins, int amt) {
        dp=vector<int>(amt+1,-1);
        long long an=solve(coins,amt);
        return an;
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v={1,3,6,10,15};
       cout<<coinChange(v,n)<<nline;
    }
return 0;
}