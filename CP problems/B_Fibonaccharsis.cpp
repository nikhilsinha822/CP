#include<bits/stdc++.h>
#define int int64_t
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
const int N=2e5;
int a[N]={0},b[N]={0};
void solve(){
    int n,k,ans=0;
    cin >> n >> k;
    if(k>(int)2e5){
        if(k<=3) cout << 1 << endl;
        else cout << 0 << endl;
    } else {
        int range=n/(a[k-1]+b[k-1]);
        for(int i=0;i<=range;i++){
            if((n-a[k-1]*i)%b[k-1]==0)
                ans++;
        }
        cout << ans << endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    a[0]=1,a[1]=0;
    b[0]=0,b[1]=1;
    for(int i=2;i<N;i++){
        a[i]=a[i-1]+a[i-2];
        b[i]=b[i-1]+b[i-2];
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}