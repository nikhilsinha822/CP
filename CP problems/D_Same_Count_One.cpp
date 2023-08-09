#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool compare_pair(const pair<int,int> &pair1, const pair<int,int> &pair2){
    int result = 1;
    if( (pair2.second > pair1.second) || ((pair2.second == pair1.second) && (pair2.first > pair1.first)) ){
    result = 0;
    }
    return result;
}

// unordered_map <ll,ll> imap;
// void seive(){
//     bool prime[N+1];
//     memset(prime,1,sizeof(prime));
//     for(ll i=2;i<=N;i++){
//         if(prime[i]){
//             imap[i*i]++;
//             // cout<<i*i<<endl;
//             for(ll j=i*i;j<=N;j+=i){
//                 prime[j]=0;
//             }
//         }
//     }
// }

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   ll t;
   cin >> t;
   while(t--){
        ll n,m;
        cin >> n >> m;
        ll a[n+1][m+1]={0,0},tsm=0,temp=0;
        pair<ll,ll> sum[n+1];
        for(ll i=1;i<=n;i++){
            temp=0;
            for(ll j=1;j<=m;j++){
                cin >> a[i][j];
                temp+=a[i][j];
                tsm+=a[i][j];
            }
            sum[i]=make_pair(temp,i);
        }
        if(tsm%n!=0)
        cout << -1 << endl;
        else{
        sort(sum+1,sum+n+1);
        ll ans=0;
        for(ll i=n;i>0;i--){
            if(sum[i].first<tsm/n)
            ans+=tsm/n-sum[i].first;
        }
        cout << ans << endl;
        ll i=1,j=n;
        while(i<j){
            for(ll k=1;k<=m;k++){
            if(a[sum[i].second][k]<a[sum[j].second][k] && sum[i].first!=tsm/n && sum[j].first!=tsm/n){
                swap(a[sum[i].second][k],a[sum[j].second][k]);
                sum[i].first++;
                sum[j].first--;
                cout << sum[i].second << " " << sum[j].second << " " << k << endl;
            }
            if(sum[i].first==tsm/n){
                i++;
                break;
            }
            if(sum[j].first==tsm/n){
                j--;
                break;
            }
            }
            
        }
        }        
        // else{
            
        // }
      
   }
return 0;
}