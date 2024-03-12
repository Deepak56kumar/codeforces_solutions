#include<bits/stdc++.h>
#define nline '\n'
using namespace std;
int solve(string &s,int n){
    string str1="map";
    string str2="pie";
    int cnt=0;
    int i=0;
    while (i<n){
        
         if(s[i] == str2[0] and s[i+1] == str2[1] and s[i+2] == str2[2]){
               cnt++;
               i += 3;
         }
         else if(s[i] == str1[0] and s[i+1] == str1[1] and s[i+2] == str1[2]){
               cnt++;
               i += 3;
         }
         else i++;
    }
return cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       string str;
       cin>>str;
        
        cout<<solve(str,n)<<nline;
    }


return 0;
}