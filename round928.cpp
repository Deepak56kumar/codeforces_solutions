#include<bits/stdc++.h>
#define nline "\n"
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cntA=0,cntB=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') cntA++;
            else cntB++;
        }
        if(cntA>cntB) cout<<"A"<<nline;
        else cout<<"B"<<nline;
    }

return 0;
}