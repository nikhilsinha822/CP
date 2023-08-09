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
      int n,c1=0,c2=0,c3=0,flg=0,flg1=0;
      cin >> n;
      string str;
      cin >> str;
      map<char,int>imap;
      for(int i=0;i<n;i++){
        imap[str[i]]++;
      }
      if(imap['L']==0 || imap['R']==0)
      cout << -1 << endl;
      else{
        for(int i=0;i<n;i++){
            if(str[i]=='L' && flg==0){
                c1=i;
            }
            else if(flg1==0 && str[i]=='R'){
                c2=i;
                flg1=1;
            }
        }
        if(n==2 && str[0]=='L' && str[n-1]=='R')
        cout << 1 << endl;

        else if(str[0]=='L' && str[n-1]=='R')
        cout << n+c2-1-c1 << endl;
        else 
        cout << 0 << endl;
      }
   }
return 0;
}