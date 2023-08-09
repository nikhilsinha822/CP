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
      if(str[0]+str[1]+str[2]==str[3]+str[4]+str[5])
      cout << "Yes" << endl;
      else
      cout << "NO" << endl;
   }
return 0;
}