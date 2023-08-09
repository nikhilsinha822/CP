#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n,m,q,count=0,ans=0;
        cin >> n >> m >> q;
        ll a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        for(int i=0;i<n;i++){
            if(a[i]<=q){
                count++;
            }
            else{
                if(count>=m){
                    ans+=((count-m+1)*(count-m+1+1))/2;
                }
                count = 0;
            }
        }
        if(count>=m){
            ans+=((count-m+1)*(count-m+1+1))/2;
        }
        count = 0;
        cout << ans << endl;
    }
return 0;
}