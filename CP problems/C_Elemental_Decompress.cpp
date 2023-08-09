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
      ll n,flag=0,large=0,temp=0;
      map<ll,ll>imap;
      vector<ll>v;
      cin >> n;
      ll a[n];
      for(int i=1;i<=n;i++)
      imap[i]=2;
      for(int i=0;i<n;i++){
        cin >> a[i];
        imap[a[i]]--;
        large=max(large,a[i]);
      }
       
      if(large!=n){
        cout << "NO" << endl;
        break;
      }
      cout << "YES" << endl;
      for(int i=0;i<n;i++)
      cout << a[i] << " ";
      cout << endl;
      temp=n;
      while(temp>0){
        if(imap[temp]>0){   
             v.push_back(temp);
             imap[temp]--;
        }
        else{
            temp--;
        }
      }
      cout << endl;


      
   }
return 0;
}