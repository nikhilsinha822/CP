#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
const ll N = 1e5+1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    map <int,vector<int>> imap;
    for(int i=1;i<N;i++){
        for(int j=2*i;j<N;j+=i){
            imap[j].pb(i);
        }
    }
    ll t;
    cin >> t;
    while(t--){
        int n,ans=0,temp=0,mul;
        cin >> n;
        int a[n+1],dp[n+1]={0};
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=n;i>1;i--){
            for(auto j:imap[i]){
                if(i%j==0 && dp[j]<dp[i]+1 && a[i]>a[j]) dp[j]++;
            }
        }
        for(int i=1;i<=n;i++) ans=max(dp[i]+1,ans);
        cout << ans << endl;
    }
return 0;
}