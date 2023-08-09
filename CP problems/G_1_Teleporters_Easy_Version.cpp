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
        ll n,m,count=0;
        cin >> n >> m;
        ll arr[n+1];
        for(int i=1;i<=n;i++){
        cin >> arr[i];
        arr[i]+=i;
        }
        sort(arr+1,arr+n+1);
        for(int i=1;i<=n;i++){
            if(m-arr[i]>=0){
                m-=arr[i];
                count++;
            }
            else{
                break;
            }
        }
        cout << count << endl;
   }
return 0;
}