
/*B. Sasha and the Drawing
Even in kindergarten, Sasha liked a girl. Therefore, he wanted to give her a drawing and attract her attention.

As a drawing, he decided to draw a square grid of size n×n
, in which some cells are colored. But coloring the cells is difficult, so he wants to color as few cells as possible. But at the same time, he wants at least k
 diagonals to have at least one colored cell. Note that the square grid of size n×n
 has a total of 4n−2
 diagonals.

Help little Sasha to make the girl fall in love with him and tell him the minimum number of cells he needs to color.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤1000) — the number of test cases. The description of the test cases follows.

The only line of each test case contains two integers n
 and k(2≤n≤108, 1≤k≤4n−2) — the size of the square grid and the minimum number of diagonals in which there should be at least one colored cell.

Output
For each test case, output a single integer — the minimum number of cells that need to be colored.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long  dig=4*n-2;
        long long half=n*2;
        if(half>=k){ 
                int d=half-k;
                cout<<half/2-d/2<<endl;
        }
        else{
               dig=dig-2;
               if(dig>=k){
                long long d=dig-k;
                   cout<<(dig-d+1)/2<<endl;
               }
               else{
                    long long d=k-dig;
                    cout<<dig/2+d<<endl;
               }
        }
        
    }
return 0;
}


/*Logic is
example:- if n=3 total 9 cell and      4*n-2 diagonals
[2choice]   [2choice]    [2choice]  -----n*2;
[No choice] [Np choice]  [No choice]      +
[1choice]   [2choice]    [1coice]   ------n*2-2;
                                        
*/