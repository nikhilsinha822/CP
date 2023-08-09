#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   ll t;
   cin >> t;
   while(t--){
      int n,flag=0;
      cin >> n;
      for(int i=0;i<1000000;i++){
        if(n-2020*i<0)
        break;
        if((n-2020*i)%2021==0)
            flag=1;
      }
      if(flag)
      cout << "YES" << endl;
      else
      cout << "NO" << endl;
   }
return 0;
}