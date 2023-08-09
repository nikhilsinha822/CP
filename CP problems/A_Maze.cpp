#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
const int N=600;
char g[N][N];
bool vis[N][N]={false};
ll cnt;
void dfs(int i, int j){
    if(cnt==0) return;
    if(g[i][j]=='#') return;
    if(i-1<0 || j-1<0 || j>N-1 || i>N-1) return;
    if(vis[i][j]) return;
    vis[i][j]=true;
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
    if(cnt>0){
        g[i][j]='X';
        cnt--;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,m,q;
    cin >> n >> m >> q;
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) g[i][j]='#';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> g[i][j];
        }
    }
    cnt=q;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dfs(i,j);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << g[i][j];
        }
        cout << endl;
    }


return 0;
}