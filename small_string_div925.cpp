#include<bits/stdc++.h>
using namespace std;
void solverFun(int n){
    string ans="";
        if(n<=27){
            ans='a';
            ans+='a';
            n=n-3;
            ans+=('a'+n);
            cout<<ans<<endl;
        }
        else if(n>=28 and n<=53){
            ans='a';
            n=n-28;
            ans+=('a'+n);
            ans+='z';
            cout<<ans<<endl;
        }
        else{
            n=n-53;
            ans+=('a'+n);
            ans+='z';
            ans+='z';
            cout<<ans<<endl;
        }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solverFun(n);
}
return 0;
}