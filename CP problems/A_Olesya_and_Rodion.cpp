#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool compare_pair(const pair<ll,ll> &pair1, const pair<ll,ll> &pair2){
ll result = 1;
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
   ll n,m;
   cin >> n >> m;
   if(n==1 && m==10)
   cout << -1;
   else{
        if(m!=10){
        for(int i=0;i<n;i++)
        cout << m;}
        else{
        for(int i=0;i<n-1;i++)
        cout << 9;
        cout << 0;
        }
   }
return 0;
}