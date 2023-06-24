#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define sc second
#define fr first
using namespace std;
const ll N=1e6;
vector<ll> g[N];
bool visited[N]={false};
void dfs(ll vertex){
    // before visiting child and after entering vertex
    visited[vertex]=true;
    cout << vertex << endl;
    for(auto child:g[vertex]){
        //before entering the child       
        if(visited[child]) continue;
        dfs(child);
        // exiting the child
    }
    // exiting the vertex
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,m;
    cin >> n >> m;
    while(m--){
        ll x,y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1);
    // for(int i=1;i<=n;i++)
    // cout << visited[i];
return 0;
}