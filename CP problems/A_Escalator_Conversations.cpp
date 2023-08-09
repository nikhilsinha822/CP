#include<bits/stdc++.h>
#define int int64_t
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
void solve(){
    int n,m,k,h,ans=0;
    cin >> n >> m >> k >> h;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++){
        if(abs(a[i]-h)%k==0 && abs(a[i]-h)/k<m && abs(a[i]-h)>0){
            ans++;
        }
    }
    cout << ans << endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}