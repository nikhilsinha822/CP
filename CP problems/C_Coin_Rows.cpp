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
    ll t;
    cin >> t;
    while(t--){
        ll n,ans=1e18;
        cin >> n;

        ll a[n+2]={0},b[n+2]={0};
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=1;i<=n;i++) cin >> b[i];

        for(int i=1;i<=n;i++) b[i]+=b[i-1];
        for(int i=1;i<=n;i++) a[n-i]+=a[n+1-i];
        

        for(int i=1;i<=n;i++){
            ans = min(max(a[i+1],b[i-1]),ans);
        }
        // for(int i=0;i<=n+1;i++) cout << a[i] << " ";
        // cout << endl;
        // for(int i=0;i<=n+1;i++) cout << b[i] << " ";
        // cout << endl;
        cout << ans << endl;

    }
return 0;
}