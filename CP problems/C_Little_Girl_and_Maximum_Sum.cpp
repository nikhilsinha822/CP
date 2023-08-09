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
    ll n,m;
    cin >> n >> m;
    ll a[n],b[n+1]={0};
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    while(m--){
        ll l,r;
        cin >> l >> r;
        b[l-1]++;
        b[r]--; 
    }
    sort(a,a+n);
    for(int i=1;i<n;i++) b[i]+=b[i-1];
    sort(b,b+n);
    for(int i=0;i<n;i++) a[i]*=b[i];
    for(int i=1;i<n;i++) a[i]+=a[i-1];
    cout << a[n-1];
return 0;
}