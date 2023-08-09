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
      if(n<10)
      cout << n << endl;
      else{
      for(int i=0;i<n;i++){
        if(n/(int)pow(10,i)==0){
        cout << n/(int)pow(10,i-1) + 9*(i-1) << endl;
        break;
        }
      }}
   }
return 0;
}