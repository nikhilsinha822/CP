#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      string str;
      cin >> str;
      cout << str;
      for(int i=str.length()-1;i>=0;i--)
      cout << str[i];
      cout << '\n';
   }
return 0;
}