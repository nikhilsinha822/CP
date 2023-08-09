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
   char c;
   cin >> c;
   string str,str1="qwertyuiopasdfghjkl;zxcvbnm,./";
   cin >> str;
    for(int i=0;i<str.size();i++){
        for(int j=0;j<str1.size();j++){
            if(c=='R' && str1[j]==str[i])
            cout << str1[j-1];
            else if(c=='L' && str1[j]==str[i])
            cout << str1[j+1];             
        }
    }
return 0;
}