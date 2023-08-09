#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n=0,m=0;
      cin >> n >> m;
      ll a[n],b[m],sum=0;
      for(int i=0;i<n;i++)
      cin >> a[i];
      for(int j=0;j<m;j++)
      cin >> b[j];
      for(int i=0;i<m;i++){
      sort(a,a+n);
      a[0] = b[i];}
      for(int i=0;i<n;i++)
      sum+=a[i];
      cout << sum << endl;
   }
return 0;
}