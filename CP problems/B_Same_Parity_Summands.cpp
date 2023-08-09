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
      ll n,m,flag=0;
      cin >> n >> m;
      vector <ll>v;
      //for(int i=0;i<n;i++){
        if(n%2){
            if(m%2 && n>=m){
                cout << "YES" << endl;
                for(int i=0;i<m-1;i++)
                cout << 1 << " ";
                cout << n-m+1 << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            if(n>=2*m){
                cout << "YES" << endl;
                for(int i=0;i<m-1;i++)
                cout << 2 << " ";
                cout << n-2*(m-1) << endl;
            }
            else if(m%2==0 && n>=m){
                cout << "YES" << endl;
                for(int i=0;i<m-1;i++)
                cout << 1 << " ";
                cout << n-m+1 << endl;
                cout << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
      //}
    //   if(flag)
    //   cout << "NO" << endl;
    //   else
    //   cout << "YES" << endl;
   }
return 0;
}