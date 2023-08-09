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
   ll N=1000000007;
   cin >> t;
   ll sum[200001];
    sum[1]=1;
    sum[2]=2;
    sum[3]=3;
    for(int i=4;i<200001;i++){
        sum[i]=(sum[i-1]+sum[i-2]+sum[i-3])%N;
        if(i%2==0)
        sum[i]+=2+1+1;
        else
        sum[i]+=1+2+2;
        sum[i]%=N;
    }
   while(t--){
      ll n;
      cin >> n;
      cout << sum[n] << endl;
   }
return 0;
}