#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
const int N=2e5+1;
ll edge[N];
vector<ll> g[N];
void dfs(int vertex,int par=0){
    ll ran=0;
    for(auto child:g[vertex]){   
        if(par==child) continue; 
        dfs(child,vertex);
        ran+=edge[child];
    }
    edge[vertex]=max((ll)1,ran);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        memset(edge, 0, sizeof(edge));
        for(int i=0;i<=n;i++) g[i].clear();
        for(int i=0;i<n-1;i++){
            ll x,y;
            cin >> x >> y;
            g[x].pb(y);
            g[y].pb(x);
        }
        dfs(1);
        ll q;
        cin >> q;
        while(q--){
            ll x,y;
            cin >> x >> y;
            cout << (edge[x])*(edge[y]) << endl;
        }
        
    }
return 0;
}