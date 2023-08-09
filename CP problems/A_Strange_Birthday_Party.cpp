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
        ll n,m,ans=0;
        cin >> n >> m;
        ll a[n],b[m+1]={0};
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=1;i<=m;i++) cin >> b[i];
        sort(a,a+n,greater<ll>());
        for(int i=0,j=1;i<n;i++){
            if(a[i]>j){
                ans+=b[j];
                j++;
        
            }
            else if(a[i]<=j){
                ans+=b[a[i]];
        
            }
        }
        cout << ans << endl;
    }
return 0;
}