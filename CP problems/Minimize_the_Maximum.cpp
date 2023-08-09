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
      ll a[n+1];
      for(int i=0;i<n;i++)
      cin >> a[i];
      a[n]=0;
      ll sum=a[0],cnt=1,ans=0,temp;
      for(int i=1;i<=n;i++){
         temp=(ll)ceil((float)sum/cnt);
         if(temp<=a[i]){
            // ans=max(ans,temp);
            sum+=a[i];
            cnt++;
         }
         else if(sum%(ll)ceil((float)sum/cnt)<=a[i]){
            ans=max(ans,temp);
            sum=sum%(ll)ceil((float)sum/cnt);
            //ans=max(ans,(ll)ceil((float)sum/cnt));
            cnt=1;
         }
         else{
            //ans=max(ans,a[i]);
            //ans=max()
            sum=a[i];
            cnt=1;
            ans=max(ans,temp);
            
         }
      }
      cout << ans << endl;
   }
return 0;
}