#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      int n,i;
      cin >> n;
      if(n%2==0){
        cout << 1 << ' ';
        for(int i=1;i<n-1;i++)
        cout << 2 << " ";
        cout << 3 << endl;
      }
      else{
      for(int i=0;i<n;i++)
      cout << 7 << ' ';
      cout << endl;}
   }
return 0;
}