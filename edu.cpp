#include<bits/stdc++.h>
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
        int i=0,j=n-1;
        while(i<n){
            if(v[i]==1) break;
            else
            i++;
        }
        while(j>=0){
            if(v[j]==1) break;
            else
            j--;
        }
        int cnt0=0;
        if(i==n-1 || j==0) cout<<0<<endl;
        else{
        for(int idx=i;idx<=j;idx++){
            if(v[idx]==0) cnt0++;
        }
        cout<<cnt0<<endl;
        }
    }

return 0;
}