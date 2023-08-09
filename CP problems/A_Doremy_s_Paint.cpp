#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      int n,st=1;
      cin >> n;
      int a[n+1];
      for(int i=1;i<=n;i++)
      cin >> a[i];
      map <int,int>m;
      for(int i=1;i<=n;i++)
      m[a[i]]++;
      for(int i=1;i<=n;i++){
        if(m[a[i]]==1)
        st++;
        else
        break;
      }
      if(st==n+1)
      st=1;
      cout << st << " " << n << endl;
   }
return 0;
}