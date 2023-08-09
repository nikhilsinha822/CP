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
      int n,c1=0,c2=0,c3=0,sum=0;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++){
      cin >> a[i];
      sum+=a[i];
      if(a[i]==-1){
      c1=1;
      c3++;
      }
      }
      for(int i=0;i<n-1;i++)
      if(a[i]==a[i+1] && a[i]==-1)  
        c2=1;
        if(c2==1)
        cout << sum+4 << endl;
        else if(c3==0)
        cout << sum - 4 << endl;
        else 
        cout << sum << endl;

   }
return 0;
}