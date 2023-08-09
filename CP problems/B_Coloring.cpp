#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   long long t;
   cin >> t;
   while(t--){
      long long n,m,k,flag=0,cnt=0;
      cin >> n >> m >> k;
      long long a[m];
      for(long long i=0;i<m;i++){
        cin >> a[i];
      }
      sort(a,a+m);
      for(long long i=0;i<m;i++){
        if(a[i]>ceil((float)n/k)){
            flag=1;
            break;
        }
        if(a[i]==n/k+1){
            cnt++;
        }
      }
      if(flag || cnt>n%k)
      cout << "NO" << endl;
      else
      cout << "YES" << endl;
   }
return 0;
}