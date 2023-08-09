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
    ll n,ans=0,count=0;
    unordered_map <ll,ll>imap,freq;
    cin >> n;
    pair<ll,ll> a[n];
    for(int i=0;i<n;i++){
       cin >> a[i].fr; 
    }
    for(int i=0;i<n;i++){
        ll temp;
        cin >> temp;
        imap[temp]=i;
    }
    for(int i=0;i<n;i++){
        if(imap[a[i].fr]<=i)
        a[i].sc=abs(i-imap[a[i].fr]);
        else
        a[i].sc=i+n-imap[a[i].fr];
    }
    for(int i=0;i<n;i++){
        freq[a[i].sc]++;
    }
    for(auto i:freq){
        ans=max(ans,i.second);
    }
    cout << ans << endl;
return 0;
}