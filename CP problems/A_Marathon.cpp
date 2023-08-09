#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      int a[4];
      for(int i=0;i<4;i++)
      cin >> a[i];
      int temp=a[0];
      sort(a,a+4,greater<int>());
      for(int i=0;i<4;i++)
      if(temp==a[i])
      cout << i << endl;
   }
return 0;
}