#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   long long q,n;
   cin >> n >> q;
   int a[n];
   for(int i=0;i<n;i++)
   cin >> a[i];
   
   while(q--){
      int val; 
      cin >> val;
      int st=0,end=n-1,mid;
      while(end-st>1){
         mid = (st+end)/2;
         if(val>=a[mid])
         st=mid;
         else
         end=mid-1;
      }
      if(a[end]<=val)
      cout << end+1 << endl;
      else if(a[st]<=val)
      cout << st+1 << endl;
      else 
      cout << st << endl;
      //cout << st << " " << end << endl;
   }
return 0;
}