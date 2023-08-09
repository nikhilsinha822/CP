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
      ll n,flag=0,sum=0;
      cin >> n;

      ll temp=n;
      if(n%2==0 || (n%2!=0 && (n/2)%10!=9))
      cout << n/2 << " " << n-n/2 << endl;
      else {
      while(temp){
        sum+=temp%10;
        temp/=10;
      }
      for(int i=0;i<n;i++){
        if(i==sum || i==sum-1 || i==sum+1){
            cout << i << " " << n-i << endl;
            flag=1;
            break;
        }
      }
      if(!flag){
        cout << -1 << endl;
      }
      }
   }
return 0;
}