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
        ll n,k,ans=0;
        cin >> n >> k;
        map <ll,ll>need;
        for(int i=0;i<n;i++){
            ll temp;
            cin >> temp;
            if(temp%k)
            need[k-temp%k]++;
        }
        for(auto i:need){
            ans= max(k*(i.second-1) + i.first,ans);
        }
        if(ans)
        ans+=1;
        cout << ans << endl;
    }
return 0;
}