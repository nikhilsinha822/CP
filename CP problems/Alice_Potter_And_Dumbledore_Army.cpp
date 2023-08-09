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
   ll n,m,x,y;
   cin >> n >> m;
   vector <pair<ll,ll>>v;
   for(int i=0;i<n;i++){
    cin >> x >> y;
    v.push_back(make_pair(x,y));
   }
   map <ll,ll>imap;
   for(int i=0;i<n;i++){
    imap[i]=0;
   }
   cout << imap.size() << endl;
   
return 0;
}