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
        ll n,temp,flag=1;
        cin >> n;
        if(n%2==0){
            cout << n/2 << " " << n/2 << endl;
        }
        else{
        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                cout << max(n/i,i) << " " << n-max(n/i,i) << endl;
                flag=0;
                break;
            }
        }
        if(flag){
            cout << 1 << " " << n-1 << endl;
        }
        }
    }
return 0;
}