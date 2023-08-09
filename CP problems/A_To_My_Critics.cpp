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
        ll a[3];
        for(int i=0;i<3;i++) cin >> a[i];
        sort(a,a+3);
        if(a[2]+a[1]>=10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
return 0;
}