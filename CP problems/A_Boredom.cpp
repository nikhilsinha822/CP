#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    
        ll n,ans=0;;
        map <ll,ll>imap;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            imap[a[i]]++;
        }
        for(auto i:imap) imap[i.first]*=i.first;
        sort(a,a+n);
        for(int i=a[0];i<=a[n-1];i++){
            if(i-2>=0) imap[i]+=imap[i-2];
            if(imap[i-1]>imap[i]) imap[i]=imap[i-1];
            ans=max(ans,imap[i]);
        }
        cout << ans << endl;
        
    
return 0;
}