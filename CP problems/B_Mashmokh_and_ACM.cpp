#include<bits/stdc++.h>
#define int int64_t
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
void solve(){
    vector<vector<int>>fac(2001);
    for(int i=1;i<=2000;i++){
        for(int j=i;j<=2000;j+=i){
            fac[i].pb(j);
        }
    }
    int n,k;
    cin >> n >> k;
    int dp[n+1]={0};
    for(int i=0;i<=n;i++) dp[i]=1;
    while(k--){
        for(int i=1;i<=n;i++){
            int temp=0;
            for(auto j:fac[i]){
                if(j>n) break;
                temp+=dp[j];
                temp%=(int)1e9+7;
            }
            dp[i]=temp;
        }
    }
    cout << dp[1] << endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    
    solve();
}