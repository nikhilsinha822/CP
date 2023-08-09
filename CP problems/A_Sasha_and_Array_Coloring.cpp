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
        ll n,sum=0;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        if(n!=1)
        for(int i=0;i<n/2;i++) sum+=abs(a[i]-a[n-1-i]);
        cout << sum << endl;
    }
return 0;
}