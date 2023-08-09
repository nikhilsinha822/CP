#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n+1];
        set <ll>s;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        if(s.size()<=3){
            cout << 0 << endl;
        }
        else{
            vector <ll>v,v2;
            ll pre[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    pre[i][j]=-1;
                }
            }
            v.pb(0);
            for(auto i:s){
                v2.pb(i);
                v.pb(i);   
            }
            for(int i=1;i<v.size();i++){
                v[i]+=v[i-1];
            }
            for(int i=0;i<v2.size();i++){
                for(int j=0;j<v2.size()-i;j++){
                    pre[i][j]=(ll)ceil(((float)v[j+1]-v[i])/(j+1));
                    pre[i][j]=max(abs(v2[j+1]-pre[i][j]),abs(v2[i+1]-pre[i][j]));
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout << pre[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

        }
    }
return 0;
}