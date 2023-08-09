#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
const int N = 1e5+1;
int cat[N],limit,ans=0;
vector<int> g[N];
void dfs(int vertex,int par=0){
    if(vertex!=1 && g[vertex].size()==1 && cat[vertex]<=limit) ans++;
    for(auto child:g[vertex]){
        if(child==par) continue;
        if(cat[vertex]>limit || cat[child]!=0) cat[child]+=cat[vertex];
        dfs(child, vertex);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n;
    cin >> n >> limit;
    for(int i=1;i<=n;i++) cin >> cat[i];
    for(int i=1;i<n;i++){
        int x,y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1);
    // for(int i=1;i<=n;i++) cout << cat[i] << endl;
    cout << ans;
return 0;
}