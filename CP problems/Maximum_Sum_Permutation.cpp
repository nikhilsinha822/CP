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
        ll n,q,sum=0;
        cin >> n >> q;
        ll a[n],b[n+2]={0},c[n],d[n+2]={0};
        map <ll,vector<ll>>imap;
        for(int i=0;i<n;i++)
        cin >> a[i];
        while(q--){
            int l,r;
            cin >> l >> r;
            if(l!=r)
            b[l]+=1,b[r]+=1;
            else
            b[l]+=1;
        }
        for(int i=1,j=n;;){
            if(i==j){
                b[i]=q;
                break;
            }
            if(i>j){
                break;
            }
            if(b[i]<b[j]){
                b[i]+=b[i-1];
                i++;
            }
            else if(b[j]<b[i]){
                b[j]+=b[j+1];
                j--;
            }
            else{
                b[i]+=b[i-1];
                b[j]+=b[j+1];
                i++;
                j--;
            }
            
        }
        for(int i=0;i<n;i++){
            // cout << b[i];
            c[i]=b[i+1];
        }
        sort(c,c+n,greater<ll>());
        sort(a,a+n, greater<ll>());
        for(int i=0;i<n;i++){
            sum+=c[i]*(a[i]);
            imap[c[i]].pb(a[i]);
        }
        cout << sum << endl;
        for(int i=1;i<=n;i++){
            cout << imap[b[i]].back() << " ";
            imap[b[i]].pop_back();
        }
        cout << endl;
    }
return 0;
}