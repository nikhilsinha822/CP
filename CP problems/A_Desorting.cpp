#include<bits/stdc++.h>
#define int int64_t
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
void solve(){
    int n,ans=1e9;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n-1;i++){
        ans=min(a[i+1]-a[i],ans);
    }
    if(ans<0) cout << 0 << endl;
    else cout << (ans)/2+1 << endl;
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