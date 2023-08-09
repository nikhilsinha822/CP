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
        ll n,m,x,y;
        cin >> n >> m >> x >> y;
        if(n+m<x+y)
        cout << "No" << endl;
        else{
            if(min(n,m)>=y)
            cout << "Yes" << endl;
            else 
            cout << "No" << endl;
        }
    }
return 0;
}