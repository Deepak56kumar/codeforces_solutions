#include<bits/stdc++.h>
#define ll long long
#define nline "\n"
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
    sort(v.begin(),v.end());
    int i,j,k,l;
    i=0,j=1,k=n-2,l=n-1;
    int ans=abs(v[i]-v[l])+abs(v[l]-v[j])+abs(v[j]-v[k])+abs(v[k]-v[i]);
    cout<<ans<<nline;
    }
return 0;
}