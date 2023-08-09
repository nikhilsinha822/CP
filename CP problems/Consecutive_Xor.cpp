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
      ll n,big=0,big1,setbit=0,flag=0,num=0,temp;
      cin >> n;
      ll a[n];
      for(int i=0;i<n;i++){
      cin >> a[i];
      big=max(big,a[i]);
      num|=a[i];
      }
      big1=big;
      while(big){
        if(big%2!=0 && big!=1)
        flag=1;
        big=big/2;
        setbit++;
      }
      if(flag)
      setbit++;
    //   while(setbit--){
    //     num+=pow(2,setbit);
    //   }
      //cout << num << endl;
      for(int i=0;i<n-1;i++){
        if(a[i]==num)
        continue;
        temp=a[i]^num;
        a[i]^=temp;
        a[i+1]^=temp;
      }
     // cout << num << endl;
    //   for(int i=0;i<n;i++)
    //   cout << a[i] << ' ';
    //   cout << endl;
    //   cout << num << endl;
        if(a[n-2]==a[n-1] || a[n-1]==0)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
   }
return 0;
}