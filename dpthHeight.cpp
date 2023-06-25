#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
const ll N=1e5;
vector<ll> g[N];
ll height[N]={0};
ll depth[N]={0};
void dfs(ll vertex,ll par=0){
    for(auto child:g[vertex]){
        if(par==child) continue;
        depth[child] = depth[vertex]+1;
        dfs(child, vertex);
        height[vertex] = max(height[child]+1,height[vertex]);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,m;
    cin >> n;
    n--;
    m=n;
    while(n--){
        ll x,y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1);
    for(ll i=1;i<m;i++){
        cout << height[i] << " " << depth[i] << endl;
    }

return 0;
}