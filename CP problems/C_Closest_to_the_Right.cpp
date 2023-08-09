#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
      int n,q;
      cin >> n >> q;
      int a[n+1];
      a[0]=0;
      for(int i=1;i<=n;i++)
      cin >> a[i];
      while(q--){
        int val;
        cin >> val;
        int st=1,end=n,mid;
        while(end-st>1){
            mid=(st+end)/2;
            if(a[mid]>=val)
            end=mid;
            else
            st=mid+1;
        }
        if(val<=a[st])
        cout << st << endl;
        else if(val<=a[end])
        cout << end << endl;
        else 
        cout << end+1 << endl;
      }
   
return 0;
}