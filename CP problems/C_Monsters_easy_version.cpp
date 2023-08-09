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
      ll n,sum=0;
      cin >> n;
      ll a[n];
      for(int i=0;i<n;i++)
      cin >> a[i];
      sort(a,a+n);
      sum+=a[0]-1;
      a[0]=1;
      for(int i=1;i<n;i++){
        if(a[i]-a[i-1]>1){
            sum+=a[i]-a[i-1]-1;
            a[i]-=a[i]-a[i-1]-1;
        }
      }
      cout << sum << endl;
   }
return 0;
}