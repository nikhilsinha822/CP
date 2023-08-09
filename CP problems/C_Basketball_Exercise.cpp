#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define sc second
#define fr first
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n;
    cin >> n;
    ll a[n],b[n];
    pair<ll,ll> dp[n+1];
    for(int i=0;i<=n;i++) dp[i]=mp(0,0);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    dp[0]=mp(a[0],b[0]);
    for(int i=1;i<n;i++){
        dp[i].fr = max(dp[i-1].sc+a[i],dp[i-1].fr);
        dp[i].sc = max(dp[i-1].fr+b[i],dp[i-1].sc);
    }
    cout << max(dp[n-1].fr,dp[n-1].sc) << endl;
return 0;
}