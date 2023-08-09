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
        ll N=1e9+7;
        ll n,m,ans=1,div2=1;
            cin >> n >> m;
        if(m>n){
            for(int i=m;i>(m-n);i--){
                ans=(ans*i)%N;
            }
        }
        else{
            for(int i=2;i<=m;i++){
            ans=(ans*i)%N;
        }
        }
        cout << ans%N << endl;
    }        
return 0;
}
