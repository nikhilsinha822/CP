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
        ll n,m,flag=0;
        vector <ll>v;
        cin >> n >> m;
        for(int i=0;i<n;i++){
            ll temp;
            cin >> temp;
            if((ll)(temp&m) == m)
            v.pb(temp);
        }
        for(int i=1;i<v.size();i++)
            v[i]&=v[i-1];
        // }
        // for(int i=0;i<v.size();i++)
        // cout << (ll)(v[i]) << " ";
        // cout << endl;
        if(v.size()==0 || v[(int)v.size()-1]!=m)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
    }
return 0;
}