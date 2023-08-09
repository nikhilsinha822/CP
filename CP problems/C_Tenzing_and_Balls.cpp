#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n+1]={0},dp[n+1]={0},v[n+1]={0};
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=1;i<=n;i++){
            if(!v[a[i]]){
                v[a[i]]=i;
                dp[i]=dp[i-1];
                continue;
            }
            dp[i]=max(dp[i-1],i-v[a[i]]+1+dp[v[a[i]]-1]);    
            dp[i]=max(dp[i],dp[v[a[i]]]+i-v[a[i]]);   
            v[a[i]]=i;
        }       
        cout << dp[n] << endl;
    }
return 0;
}