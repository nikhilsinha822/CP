#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   ll t,lrg=0;
   cin >> t;
   map<string,ll>m1;
   while(t--){
      string str;
      ll big=0;
      cin >> str;
      m1[str]++;
   }
   for(auto i:m1){
         lrg=max(lrg,i.second);
      }
   for(auto i:m1){
      if(i.second==lrg)
         cout << i.first;
   }
return 0;
}