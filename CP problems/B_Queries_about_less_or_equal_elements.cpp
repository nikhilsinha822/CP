#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
     ll n,m;
     cin >> n >> m; 
     ll a[n],b[m],c[m];
        unordered_map<ll,ll> imap;
        for(int i=0;i<n;i++)
        cin >> a[i];
        for(int i=0;i<m;i++){
            cin >> b[i];
            c[i]=b[i];
            imap[b[i]]=0;
        }
        sort(a,a+n);
        sort(b,b+m);
        ll i=0,j=0;
        while(j<m){
            if(i<n && a[i]<=b[j]){
                i++;
            }
            else{
                if(b[j]>=a[n-1] && i==n-1)
                imap[b[j]]=i+1;
                else
                imap[b[j]]=i;
                j++;
            }
        }
        for(int i=0;i<m;i++)
        cout << imap[c[i]] << " ";
return 0;
}