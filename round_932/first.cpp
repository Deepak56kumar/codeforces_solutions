#include<bits/stdc++.h>
#define ll long long
#define nline "\n"
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string str;
        cin>>str;
        string cpy=str;
        reverse(cpy.begin(),cpy.end());
        if(n%2==0){
            if(str<=cpy){

            }else{
                str=cpy+str;
            }
        }
        else{
            if(str<cpy){
                str+=str;
            }
            else{
                str=cpy;
            }
        }
        cout<<str<<nline;
    }


return 0;
}