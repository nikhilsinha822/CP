#include<bits/stdc++.h>
#define int int64_t
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
void solve(){
    int n,k;
    vector <int>v;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1,temp=0;i<=a[n-1];i++){
        if(i==a[temp]) temp++;
        else v.pb(i);
    }
    if(a[0]>1) cout << 1 << endl;
    else{
        int l=v.size();
        cout << v[(k-1)%l]+a[n-1]*(k-1)/l << endl;
    }
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