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
   string str;
   cin >> str;
   int a[str.size()],b[str.size()],count=0;
   for(int i=0;i<str.size();i++){
   if(str[i]=='.'){
   a[i]=count;
   count++;
   }
   else
   count=0;
   }
   count=0;
   for(int i=0;i<str.size();i++){
   if(str[i]=='#'){
   b[i]=count;
   count++;
   }
   else
   count=0;
   }
   int q;
   cin >> q;
   while(q--){

   }
return 0;
}