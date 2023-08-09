#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      long long n;
      cin >>n;
      long long a[n];
      map <long long, long long>m;
      for(int i=0;i<n;i++){
      cin >> a[i];
      m[a[i]]++;
      }
      sort(a,a+n);
      if(a[0]==a[n-1])
      cout << n*(n-1) << endl;
      else
      cout << m[a[0]]*m[a[n-1]]*2 << endl;  
   }
return 0;
}