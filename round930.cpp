#include<bits/stdc++.h>
#define ll long long
#define nline "\n"
using namespace std;
ll solve(ll n){
    ll lr=log2(n);
    ll ans=pow(2,lr);
return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       cout<<solve(n)<<nline;
    }

return 0;
}