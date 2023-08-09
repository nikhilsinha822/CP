#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   
      long long sz,n,cnt=0;
      cin >> sz >> n;
      long long a[n];
      for(int i=0;i<n;i++)
      cin >> a[i];
      
      for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])
            cnt++;
      }

      cout << cnt*sz + a[n-1]-1 << endl;
return 0;
}