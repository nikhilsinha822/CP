#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++)
      cin >> a[i];
      cout << a[0] << '\n';
   }
return 0;
}