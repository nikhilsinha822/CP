#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=10000;
bool prime[N+1];
void seive(){
    memset(prime,1,sizeof(prime));
    for(int i=2;i<=N;i++){
        for(int j=i*i;j<=N;j+=i){
            prime[j]=0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    seive();
    ll t;
    cin >> t;
    while(t--){
        ll l,m,flag=0,ans=1;
        cin >> l >> m;
        if(m>=l){
        cout << 1 << endl;
        flag=1;
        }
        else
        for(int i=2;i<1000000;i++){
            if(l/i<=m && l%i==0){
                cout << i << endl;
                
                flag=1;
                break;
            }
            if(l%i==0 && i<=m){
                ans=i;
            }
        }
        if(flag==0){
            //if(ans)
            cout << l/ans << endl;
            // else
            // cout << l << endl;
        }
    }
    //cout << 440404979%62914997 << endl;
    //cout << prime[13];
return 0;
}