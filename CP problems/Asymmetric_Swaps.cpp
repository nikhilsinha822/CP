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
   cout.precision(15); cout << fixed;
   ll t;
   cin >> t;
   while(t--){
      ll n;
      cin >> n;
      ll a[2*n];
      for(int i=0;i<2*n;i++)
      cin >> a[i];
      sort(a,a+2*n);
      ll a2=0,a1=1000000000000000000;
      for(int i=0;i<=n;i++){
        a1=min(a[n-1+i]-a[i],a1);
      }
    //   a1=a[n-1]-a[0];
    //   a2=a[2*n-1]-a[n];
      cout << a1  << endl;
   }
return 0;
}