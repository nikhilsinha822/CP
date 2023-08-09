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
        ll b1,b2;
        b1=(1+sqrt(1+8*m))/2;
        b2=n-m+((b1)*(b1-1))/2;
        b1=n-b1;
        for(int i=1;i<=n;i++){
            if(i==b1 || i==b2)
            cout << 'b';
            else
            cout << 'a';
        }
        //cout << " b1 =" << b1 << " b2=" << b2;
        cout << endl;
    }
return 0;
}