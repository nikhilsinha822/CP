#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      int n,flag=0,gg;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++)
      cin >> a[i];
      sort(a,a+n);
      gg = a[0];
      for(int i=1;i<n;i++){
        gg= __gcd(gg,a[i]);
      }
      if(gg==1)
      cout << a[n-1] << endl;
      else
      cout << a[n-1]/gg << endl;
   }
return 0;
}