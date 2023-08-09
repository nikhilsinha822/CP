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
      string str;
      int flg=1;
      cin >> str;
      map<char,int>m;
      for(int i=0;i<str.size();i++)
      m[str[i]]++;
      if((str[0]=='a' && str[str.size()-1]=='a') || (str[0]=='b' && str[str.size()-1]=='b')){
        cout << str[0] << " ";
        for(int i=1;i<str.size()-1;i++)
        cout << str[i];
        cout << str[str.size()-1] << endl;
      }
      if(m['b']==1){
        if(str[str.size()-1]=='b'){
            cout << str[0] << " ";
            for(int i=1;i<str.size()-1;i++)
            cout << str[i];
            cout << str[str.size()-1] << endl;
        }

      }
    //   if(str[0]=='a' && str[str.size()-1]='a'){
    //     for(int i=0;i<str.size()-1;i++)
    //     if(str[i]='b' && flg){
    //     cout << " ";flg=0}
    //     cout << str[i];
    //     cout << ' a' << endl;
    //   }
    //     if(str[i]=='b' && str[str.size()-1]=='b'){
    //         cout << 'b ';
    //         for(int i=`;i<str.size()-1;i++)
    //         cout << str[i];
    //         cout << ' b';
    //     }



   }
return 0;
}