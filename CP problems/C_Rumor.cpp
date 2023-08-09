#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
const int N = 1e5+9;
bool visited[N]={false};
vector <ll>g[N];
ll a[N],ans=0;
ll dfs(int vertex){
    visited[vertex]=true;
    ll small=a[vertex];
    ans-=a[vertex];
    for(auto child:g[vertex]){
        if(visited[child]) continue;
        small=min(small,dfs(child));
    } return small;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++){ 
        cin >> a[i];
        ans+=a[i];    
    }
    while(m--){
        ll x,y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ans+=dfs(i);
        }
    }

    cout << ans << endl;
return 0;
}