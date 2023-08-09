#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      int a[3],b[3];
      for(int i=0;i<3;i++)
      cin >> a[i] >> b[i];
      if((a[0]==a[1] || a[1]==a[2] || a[2]==a[0]) && (b[0]==b[1] || b[1]==b[2] || b[2]==b[0]))
      cout << "NO" << endl;
      else
      cout << "YES" << endl;
   }
return 0;
}