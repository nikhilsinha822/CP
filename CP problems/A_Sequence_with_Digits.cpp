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
        ll n,m;
        cin >> n >> m;
        m--;
        while(m--){
        ll temp=n,small=9,large=0;
        while(temp){
            small=min(temp%10,small);
            large=max(temp%10,large);
            temp/=10;
        }
        n+=small*large;
        if(small==0)
        break;
        }
        cout << n << endl;
    }
return 0;
}