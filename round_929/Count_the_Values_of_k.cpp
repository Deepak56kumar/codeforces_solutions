#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(int a,int b,int l){
    unordered_set<int>st;
    for( int x=0;x<21;x++){
        for(int y=0;y<21;y++){
            int r=pow(a,x)*pow(b,y);
            if(l%r==0){
                st.insert(l/r);
            }
        }
    }
return st.size();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,l;
        cin>>a>>b>>l;
        cout<<solve(a,b,l)<<endl;
    }
return 0;
}