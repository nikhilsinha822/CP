#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   t=1;
   while(t--){
      int n;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++){
        cin >> a[i];
      }
      sort(a,a+n);
      int q;
      cin >> q;
      while(q--){
        int m;
        cin >> m;
        int st=0,end=n-1,mid; 
        while(end-st>1){
            mid=(st+end)/2;
            if(a[mid]>m)
            end=mid-1;
            else
            st=mid;
        }
        if(m<a[st])
        cout << st << endl;
        else if(m<a[end])
        cout << end << endl;
        else
        cout << end+1 << endl;
      }
   }
return 0;
}