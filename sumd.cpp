#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>v(200001);
ll digitSum(ll n){
    ll sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
return sum;
}

int main(){
    ll t;
    cin>>t;
    v[0]=0;
        for(int i=1;i<v.size();i++){
        v[i]=v[i-1]+digitSum(i);
        }
    while(t--){
        ll n;
        cin>>n;
         cout<<v[n]<<endl;
        }
return 0;
}