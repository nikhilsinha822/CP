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
      ll n,m,sum=0;
      cin >> n >> m;
      ll steps[n],leg[m],leg2[m];
      map <ll,ll>imap,imap2;
      for(int i=0;i<n;i++)
        cin >> steps[i];
      for(int i=0;i<m;i++){
        cin >> leg[i];
        leg2[i]=leg[i];
        
        }
      sort(leg,leg+m);
    //   for(int i=1;i<m;i++)
    //   height[i]+=leg[i-1];
      for(int i=0,j=0;i<m;i++){
        for(;j<n;j++){
        if(leg[i]>=steps[j])
        sum+=steps[j];
        else{
        break;}
        } 
        imap2[leg[i]]=sum;  
      }
      for(int i=0;i<m;i++){
        cout << imap2[leg2[i]] << " ";
      }
      cout << '\n';
    //   for(int i=0;i<m;i++){
    //     {
    //     sum+=steps[i];
    //     if(leg[i]>=steps[i])
        
    //     }
    //   }
   }
return 0;
}