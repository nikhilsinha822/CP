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
      ll n,cannon,flag=1,cnt=0;
      cin >> n >> cannon;
      ll cannon2=cannon;
      ll a[n],b[n];
      for(int i=0;i<n;i++)
      cin >> a[i];
      for(int i=0;i<n;i++)
      cin >> b[i];
      pair<ll,ll>mons[n];
      for(int i=0;i<n;i++)
        mons[i]=make_pair(a[i],b[i]);
      sort(mons,mons+n);
      //ll weak[n];
      for(int i=n-2;i>=0;i--){
        mons[i].second=min(mons[i].second,mons[i+1].second);
      }
      for(int i=0;i<n;i++){
        
        if(mons[i].first>cannon){
          if(cannon<=mons[i].second)
            break;
            cannon2-=mons[i].second;
            cannon+=cannon2;
            //cnt--;
            i--;  
        }
      }
      // for(int i=0;i<n;i++)
      //   cout << mons[i].first << " " ;
      // cout << endl;
      
      if(cannon >= mons[n-1].first)
      cout << "YES" << endl;
      else{
      cout << "NO" << endl;
      }
   }
return 0;
}