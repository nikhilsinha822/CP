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
      int n;
      cin >> n;
      if(n%2){
     if(n==3)
     cout << "NO" << endl;
      else if((n-1)%4==0){
        cout << "YES" << endl;
      for(int i=0;i<(n-1)/2;i++)
      cout << 2*(n-1)/4-1 << " " << -2*(n-1)/4 << " ";
      cout << 2*(n-1)/4-1 << endl;
      }
      else if((n-1)%2==0){
        cout << "YES" << endl;
      for(int i=0;i<(n-1)/2;i++)
      cout << -((n-1)/2-1) << " " << (n-1)/2 << " ";
      cout << -((n-1)/2-1) << endl;
      }}
      else{
        cout << "YES" << endl;
        for(int i=0;i<n/2;i++)
        cout << -1 << " " << 1 << " ";
        cout << endl;
      }
   
//return 0;
}
return 0;
}