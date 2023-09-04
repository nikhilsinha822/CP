#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define sc second
#define fr first
using namespace std;

void dfs(int i, int j,int n, int m){
    if(i<0 || j<0) return;
    if(i>=n || j>=m) return;

    dfs(i+1,j,n,m);
    dfs(i-1,j,n,m);
    dfs(i,j+1,n,m);
    dfs(i,j-1,n,m);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    int n=10,m=10;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dfs(i,j,n,m);
        }
    }
return 0;
}