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
        ll n,m,r1=-1e15,r2=1e15;
        cin >> n >> m;
        ll temp=n;
        ll a[n+1];
        for(int i=0;i<=n;i++) a[i]=0;
        while(temp--){
            ll l,r;
            a[l]=1;
            a[r+1]=-1;
        }
        for(int i=1;i<n;i++){
            a[i]+=a[i-1];
        }
        for(int i=0;i<n;i++){
            r2=min(a[i],r2);
            r1=max(r1,a[i]);
        }
        cout << r1-r2 << endl;
    }
return 0;
}