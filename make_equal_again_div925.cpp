
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int l=1;
        int r=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]) break;
            l++;
        }
        for(int i=n-2;i>=0;i--){
            if(nums[i]!=nums[i+1]) break;
            r++;
        }
        ll s=0;
        if(nums[0]==nums[n-1]) 
        s=min(n,l+r);
        else 
        s=min(n,max(l,r));
        cout<<n-s<<endl;
}
return 0;
}