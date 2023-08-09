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
        ll n,m;
        cin >> n >> m;
        if(log2(n)<m)
        cout << n+1 << endl;
        else
        cout << (ll)pow(2,m) << endl;
    }
return 0;
}