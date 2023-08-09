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
        ll n,ans=0;
        cin >> n;
        ll a[n+1];
        string num;
        map <ll,ll>imap;
        cin >> num;
        a[0]=0;
        for(int i=1;i<=n;i++) a[i]=num[i-1]-'0';
        for(int i=1;i<=n;i++) a[i]+=a[i-1];
        for(int i=0;i<=n;i++) imap[a[i]-i]++; 

        for(auto i:imap){
            ans+=((i.sc)*(i.sc-1))/2;
        } 

        cout << ans  << endl;
    }
return 0;
}