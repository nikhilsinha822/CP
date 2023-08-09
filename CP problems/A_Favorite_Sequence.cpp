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
      for(int i=0,j=n-1;;i++,j--){
        if(n==1)
        cout << a[i];
        else
        cout << a[i] << " " << a[j] << " ";
        if(i>n/2-2 || j<n/2-2)
        break;
      }
      if(n%2 && n!=1)
      cout << a[(n+1)/2-1];
      cout << '\n';
   }
return 0;
}