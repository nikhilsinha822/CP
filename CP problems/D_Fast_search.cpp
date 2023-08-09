#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int n;
   cin >>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin >> a[i];
   sort(a,a+n);
   // for(int i=0;i<n;i++)
   // cout << a[i] << " ";
   cout << '\n';
   int q;
   cin >> q;
   while(q--){
      int l,r,a1,a2;
      cin >> l >> r;
      int st=0,end=n-1,mid;
      while(end-st>1){
         mid=(st+end)/2;
         if(a[mid]>=l)
            end=mid;
         else
            st=mid+1;
      }
      if(l<=a[st])
         a1 = st;
      else if(l<=a[end])
         a1=end;
      else
         a1=end+1;
      st=0,end=n-1,mid=0;
      while(end-st>1){
         mid=(st+end)/2;
         if(r>=a[mid])
            st=mid;
         else
            end=mid-1;
      }
      if(a[st]>r)
         a2=st;
      else if(a[end]>r)
         a2=end;
      else 
         a2=end+1;

      cout << a2-a1 << ' ';
   }
return 0;
}