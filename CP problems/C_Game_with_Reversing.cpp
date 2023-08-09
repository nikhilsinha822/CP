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
        ll n,cf=0,cr=0,ans=1e18;
        cin >> n;
        string n1,n2,n3;
        cin >> n1 >> n2;
        for(int i=n-1;i>=0;i--) n3.pb(n2[i]);
        for(int i=0;i<n;i++) if(n1[i]!=n2[i]) cf++; 
        for(int i=0;i<n;i++) if(n1[i]!=n3[i]) cr++;
        if(cf==0)
        cout << 0 << endl;
        else if(cr==0)
        cout << 2 << endl;
        else {
            if(cf<cr){
                if(cf%2)
                    ans=min(ans,(cf-1)*2+1);
                else
                    ans=min(ans,cf*2);
            }
            else if(cf==cr){
                ans=min(ans,(cf-1)*2+1);
            }
            else{
                if(cr%2==0)
                    ans=min(ans,(cr-1)*2+1);
                else
                    ans=min(ans,cr*2);
            }
        cout << ans << endl; 
        }
    }
return 0;
}