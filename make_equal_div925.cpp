#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool solver(vector<int>&nums,int n,ll div){
        ll cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]>div) cnt+=nums[i]-div;
            else if(nums[i]<div){
                 if(cnt>=div-nums[i]) 
                cnt-=(div-nums[i]);
            else return false;
            }
        }
return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            sum+=nums[i];
        }
        ll div=sum/n;
        if(sum%n!=0) {
            cout<<"NO"<<endl;
            return 0;
        }
        if(solver(nums,n,div)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
return 0;
}