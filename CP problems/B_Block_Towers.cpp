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
      cin >> n;
      long long a[n];
      for(long long i=0;i<n;i++)
      cin >> a[i];
      sort(a+1,a+n);
      for(long long i=1;i<n;i++){
        if(a[i]>a[0])
        a[0]=(a[i]+a[0])/2+(a[i]+a[0])%2;
      }
      cout << a[0] << endl;
    //     for(int i=0;i<n;i++)
    //   cout << a[i] << " ";
   }
return 0;
}