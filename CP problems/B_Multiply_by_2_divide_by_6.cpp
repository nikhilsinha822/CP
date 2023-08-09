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
      int n,cnt=0;
      cin >> n;
      while(n>=3){
        if(n%3!=0 && n%6!=0){
            break;
        }
        if(n%2==0){
        n/=6;
        cnt++;
        }
        else{
        n/=3;
        cnt+=2;
        }
      }
      if(n==1)
        cout << cnt << endl;
      else
        cout << -1 << endl;
   }
return 0;
}