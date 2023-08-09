#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
const ll N=2e5+1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    vector<vector<ll>>v(N);

    for(ll i=1;i<N;i++){
        for(ll j=i;j<N;j+=i){
            v[j].pb(i);
        }
    }
    ll t;
    cin >> t;
    while(t--){
        ll n,ans=0;
        cin >> n;
        map <ll,ll>imap;
        for(int i=0;i<n;i++){
            ll temp;
            cin >> temp;
            imap[temp]++;
        }
        for(int i=1;i<=n;i++){
            ll temp=0;
            for(auto j:v[i]){
                temp+=imap[j];
            }
            ans=max(temp,ans);
        }
        cout << ans << endl;
    }
return 0;
}