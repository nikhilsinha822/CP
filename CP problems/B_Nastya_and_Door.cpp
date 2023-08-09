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
        ll n,k,ans=0;
        cin >> n >> k;
        ll a[n+1]={0},b[n+1]={0};
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=2;i<n;i++) if(a[i-1]<a[i] && a[i+1]<a[i]) b[i]=1;
        for(int i=n-1;i>n-k+1;i--) ans+=b[i];
        ll temp=ans,index=n-k+1;
        for(int i=n-k;i>=1;i--){
            temp+=b[i+1];
            temp-=b[i+k-1];
            if(temp>=ans){
                index=i;
                ans=temp;
            }
        }
        cout << ans+1 << " " << index << endl;
    }
return 0;
}