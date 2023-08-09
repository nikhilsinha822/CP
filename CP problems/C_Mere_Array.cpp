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
        ll n,curr=0,flag=1;
        cin >> n;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            
            if(b[i]!=a[i] && __gcd(b[i],a[0])!=a[0])
            flag=0;
        }
        if(flag)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
return 0;
}