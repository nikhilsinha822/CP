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
      ll a[2*n],ans=0,temp=0;
      //int a2=0,temp2=2*n-1;
      for(ll i=0;i<2*n;i++){
      cin >> a[i];
        if(a[i]>n)
        a[i]=1;
        else
        a[i]=0;
      }
      for(ll i=0;i<2*n;i++){
        if(a[i]==0 && temp<n){
            ans+=i-temp;
            temp++;
        }
      }
    //   for(int i=2*n-1;i>=0;i--){
    //     if(a[i]){
    //         a2+=temp2-i;
    //         temp2--;
    //     }
    //   }
      cout << ans << endl;
   }
return 0;
}