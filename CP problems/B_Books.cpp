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
   ll n,m,count=0,sum=0,ans=0;
   cin >> n >> m;
   ll a[n+1],s[n+1];
   for(int i=1;i<=n;i++){
    cin >> a[i];
   }
   s[0]=0;
   for(int i=1;i<=n;i++){
    s[i]=s[i-1]+a[i];
   }
//    for(int i=0;i<=n;i++){
//     cout << s[i] << endl;
//    }
   for(int i=1;i<=n;i++){
        ll st=i,end=n,mid;
        while(end>=st){
            mid=(st+end)/2;

            if(s[mid]-s[i-1]<=m){
                ans=max(ans,mid-i+1);
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
   }
    

   //sort(a,a+n);
//    for(int i=0;i<n;i++){
//     sum=0;
//     count=0;
//     for(int j=i;j<n;j++){
//         sum+=a[j];
//         if(sum>m){
//             sum=0;
//             count=0;
//             //i=j;
//             break;
//         }
        
//         count++;
//         ans=max(count,ans);
//     }
//    }
  cout << ans << endl;
return 0;
}