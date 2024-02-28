#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            
        }
        if(sum%3==0) cout<<0<<endl;
        else{
            if((sum+1)%3==0) cout<<1<<endl;
            else{
            int f=0;
            for(int i=0;i<n;i++){
                ll t=sum;
                 t-=v[i];
                 if(t%3==0){
                    f=1;
                    cout<<1<<endl;
                    break;
                 }
            }
            if(f==0){
                cout<<2<<endl;
            }
        }
        }
        
    }
return 0;
}