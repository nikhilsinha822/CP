#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   ll t;
   cin >> t;
   while(t--){
      int n,m;
      cin >> n >> m;
      if(n==m)
      for(int i=1;i<=n;i++)
      cout << i << " ";
      else{
      for(int i=n-m+2;i<=n;i++)
      cout << i << " ";
      for(int i=1;i<=m+1;i++)
      cout << i << " ";}
      cout << '\n';
   }
return 0;
}