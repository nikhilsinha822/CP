#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      int n,m;
      cin >> n >> m;
      cout << n/2+1 << " " << m/2+1 << '\n';
   }
return 0;
}