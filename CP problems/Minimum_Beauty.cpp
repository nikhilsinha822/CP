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
      ll n,flag=0;
      cin >> n;
      ll a[n];
      map <ll,ll>imap;
      for(int i=0;i<n;i++){
        cin >> a[i];
        imap[a[i]]++;
      }
      sort(a,a+n);
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(imap[abs(a[j]-2*a[i])]!=0)
            flag=1;
        }
      }
      if(flag)
      cout << 0 << endl;
   }
return 0;
}