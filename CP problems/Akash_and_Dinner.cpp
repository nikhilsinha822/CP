#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool compare_pair(const pair<ll,ll> &pair1, const pair<ll,ll> &pair2){
    ll result = 0;
    if( (pair2.second > pair1.second) || ((pair2.second == pair1.second) && (pair2.first > pair1.first)) ){
    result = 1;
    }
    return result;
}
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >>n >> k;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        cin >> a[i];
        for(ll i=0;i<n;i++)
        cin >> b[i];
        pair <ll,ll>pr[n];
        for(ll i=0;i<n;i++){
            pr[i]=make_pair(a[i],b[i]);
        }
        ll temp=a[0];
        sort(pr,pr+n,&compare_pair);
        for(ll i=0;i<n;i++){
             temp=max(temp,a[i]);
         }
         
         
            map <ll,ll>imap;
            ll cunt=0;
             for(ll i=0;i<n;i++){
                if(imap.find(pr[i].first)==imap.end() && imap.size()<k){
                imap[pr[i].first]++;
                cunt += pr[i].second;
                //cout << pr[i].first << " " << pr[i].second << endl;
                }
                else{
                    if(imap.size()==k)
                    break;
                }
                
             }
             if(imap.size()==k)
             cout << cunt << endl;
             else
             cout << -1 << endl;
        
    }
	// your code goes here
	return 0;
}
