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
      ll x,y,z,flag=0;
      cin >> x >> y >> z;
      ll a[x],b[x];
      for(int i=0;i<x;i++)
      cin >> a[i];
      for(int i=0;i<x;i++)
        cin >> b[i];
      if(a[x-1]-a[0]+2*y<b[x-1]-b[0]+2*z)
      cout << "NO" << endl;
      else{
        ll a1[x-1],b1[x-1];
        for(int i=0;i<x-1;i++){
            a1[i]=a[i+1]-a[i]-2*y;
            b1[i]=b[i+1]-b[i]-2*z;

            if(b1[i]<a1[i])
            flag=1;
        }

        if(flag)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
      }  
     
   }
return 0;
}