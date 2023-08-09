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
   ll n;
   cin >> n;
   ll a[n+1];
   a[0]=0;
   for(int i=1;i<=n;i++){
        cin >> a[i];
        a[i]+=a[i-1];
   }
   ll q;
   cin >> q;
   while(q--){
        ll var;
        cin >> var;
        ll st=1,end=n+1,mid;
        while(end-st>1){
            mid=(st+end)/2;
            if(a[mid]<var)
            st=mid+1;
            else
            end=mid;
        }
        if(a[st]>=var)
        cout << st;
        else if(a[end]>=var)
        cout << end;
        cout << '\n';
   }

return 0;
}