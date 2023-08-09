#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define sc second
#define fr first
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(15);
    cout << fixed;
    ll x,ans=1;
    map <ll,ll>imap;
    cin >> x;
    for(ll i=1;i<=sqrt(x);i++){
        if(x%i==0 && lcm(i,x/i)==x && max(ans,x/ans)>max(i,x/i)){
            ans=i;
        }
    }
    cout << ans << " " << x/ans << endl;
    return 0;
}