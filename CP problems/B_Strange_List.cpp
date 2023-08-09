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
   int t;
   cin >> t;
   while(t--){
      ll n,x,sum=0;
      cin >> n >> x;
      int a[n];
      vector <pair <ll,ll>>vect;
      for(int i=0;i<n;i++){
        cin >> a[i];
        vect.push_back(make_pair(a[i],1));
        sum+=vect[i].first;
      }
      ll temp;
      
        for(int i=0;i<vect.size();i++){
            if(vect[i].first%x==0){
                sum+=vect[i].first*vect[i].second;
                vect.push_back(make_pair(vect[i].first/x,x*vect[i].second));
            }
            else{
                break;
            }
        }
        //cout << "\n";
     cout << sum << endl;
   }
return 0;
}