#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
ll comp(ll num){
    ll bitCount=ceil(log2(n))+1;
    return pow(2,bitCount+1) ^ num;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n,small=1e18;
        cin  >> n;
        ll a[n];
        map <ll,ll>imap;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++){
            if(i!=0) a[i]&=a[i-1];
            imap[a[i]]++;
        }
        for(int i=0;i<n;i++){
            small=min(small,a[i]);
            small=min(small)
        }

    }
return 0;
}