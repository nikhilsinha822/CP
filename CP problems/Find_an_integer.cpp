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
      ll n,m,i=1;
        cin >> n >> m;
        ll ans=(n*m)-n-m;
        if(ans<=0){
            while(i++){
                if((i+m)%n==0 && (i+n)%m==0){
                cout << i << endl;
                break;
                }
            }
        }
        else
        cout << ans << endl;
    //   cout << 192%18 << " " << 192%42 << endl;
    //   cout << __gcd(n,m) << endl;
   }
return 0;
}