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
        ll n,m;
        set <ll>s;
        cin >> n >> m;
        ll a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        sort(a,a+n,greater<int>());
        if(m>n){
        cout << 0 << endl;
        continue;
        }
        for(int i=0;i<m;i++){
            s.insert(a[i]);
        }
        // for(auto i:s)
        // cout << i << " ";
        // cout << endl;
        for(int i=m;i<n;i++){
            ll temp=*s.begin();
            temp+=a[i];
            
            s.insert(temp);
            s.erase(s.begin());
        }
        for(auto i:s)
        cout << i << " ";
        cout << endl;
        //cout << *s.begin() << endl;
    }
return 0;
}