#include<bits/stdc++.h>
#define ll long long
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
         ll a[n+1];
         map <ll,ll>imap;
         for(int i=1;i<=n;i++){
            cin >> a[i];
            imap[a[i]]++;
         }
         ll dis=0;
         for(auto i:imap){
            if(i.second!=0)
            dis++;
         }
         ll temp=m;
         ll prev=0;
         while(temp--){
            ll x,y;
            cin >> x >> y;
            if(imap[y]==0){
                prev++;
            }
            imap[a[x]]--;
            a[x]=y;
            imap[y]++;
            ans+=(prev+dis); 
         }
         cout << ans << endl;
    }
return 0;
}