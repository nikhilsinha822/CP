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
//unordered_map <ll,ll> imap;
//void seive(){
//    bool prime[N+1];
//    memset(prime,1,sizeof(prime));
//    for(ll i=2;i<=N;i++){
//        if(prime[i]){
//            imap[i*i]++;
//            for(ll j=i*i;j<=N;j+=i){
//                prime[j]=0;
//            }
//        }
//    }
//}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(0); cout << fixed;
  //  ll t;
  //  cin >> t;
  //  while(t--){
  //     ll n,m,k,sum=0;
  //     ll a[100],pre[101];
  //     pre[0]=0;
  //     cin >> n >> m >> k;
  //     for(ll i=0;i<n;i++){
  //       a[i]=1;
  //     }
  //     for(ll i=1;i<=n;i++){
  //       pre[i]+=pre[i-1];
  //     }
  //     for(ll i=0;i<n;i++){
  //       cout << a[i] << " ";
  //     }
  //     cout << endl;
  //  }
  cout << pow(100,100) << endl;
return 0;
}