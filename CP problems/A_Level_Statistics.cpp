#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n,a=0,b=0,flag=1;
        cin >> n;
        while(n--){
            int ta,tb;
            cin >> ta >> tb;
            if(tb-b>ta-a || ta<a || tb<b)
                flag=0;
            a=ta,b=tb;
        }
        if(flag)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
return 0;
}