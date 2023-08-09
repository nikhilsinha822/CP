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
        ll n,c;
        cin >> n >> c;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        ll st=0,end=1e9,mid=0;
        while(end-st>1){
            mid=(st+end)/2;
            ll ans=0;
            for(int i=0;i<n;i++){
                ans+=(a[i]+2*mid)*(a[i]+2*mid);
                if(ans > c) break;
            }
            if(ans>c){
                end=mid;
            } else if(ans < c){
                st=mid;
            } else break;
        }
        cout << mid << endl;
    }
return 0;
}