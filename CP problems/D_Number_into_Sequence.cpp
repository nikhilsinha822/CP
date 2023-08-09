#include<bits/stdc++.h>
#define int int64_t
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
const int N=1e5+1;
bool prime[N];
void solve(){
    int n,ans=1,st=1;
    cin >> n;
    for(int i=2;i*i<=n;i++){
        int temp=0,nt=n;
        if(prime[i]){
        while(nt%i==0){
            nt/=i;
            temp++;
        }
        if(temp>ans){
            ans=temp;
            st=i;
        }}
    }
    cout << ans << endl;
    for(int i=1;i<ans;i++)
    cout << st << " ";
    cout << n/(int)pow(st,ans-1) << endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    memset(prime, 1, sizeof(prime));
    for(int i=2;i<N;i++){
        if(prime[i])
        for(int j=i*i;j<N;j+=i)
            prime[j]=0;
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}