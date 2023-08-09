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
      ll a[n],b[n],big=0,sm=1000000000000000000,big1=0,sm1=1000000000000000000;
      pair<ll,ll>cp[n];
      for(int i=0;i<n;i++){
        cin >> a[i];
        big=max(big,a[i]);
        sm=min(sm,a[i]);
      }
      for(int i=0;i<n;i++){
        cin >> b[i];
        big1=max(big1,b[i]);
        sm1=min(sm1,b[i]);
      }
    //   for(int i=0;i<n;i++){
    //     cp[i]=(make_pair(a[i],b[i]));
    //   }
      //sort(cp,cp+n);
        for(int i=0;i<n;i++){
            if(b[i]==max(big,big1) || b[i]==min(sm,sm1)){
                swap(a[i],b[i]);
            }
        }

      //for(int i=0;i<n-1;i++){
         //cout << cp[i].first << " ";
    //      if(cp[n-1].first-cp[i].first>cp[n-1].first-cp[i].second)
    //      swap(cp[i].second,cp[i].first)
    //   }
      sort(a,a+n);
      sort(b,b+n);
    //cout << endl;
      cout << min(a[n-1]-a[0],b[n-1]-b[0]) << endl;
   }
return 0;
}