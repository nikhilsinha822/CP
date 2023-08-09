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
        ll n,od=0,ev=0,ans1=1,ans2=1;
        ll N=1e9+7;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%2)
        od++;
        else
        ev++;
        }
        if(n==1){
            if(ev)
            cout << 2 << endl;
            else
            cout << 1 << endl;
        }

        else{
            for(int i=0;i<ev;i++){
            ans1*=2;
            ans1%=N;
            } 
        }

        cout << ans1 << endl;
    }
return 0;
}