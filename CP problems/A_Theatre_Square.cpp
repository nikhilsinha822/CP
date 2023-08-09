#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   double a,b,c;
   cin >> a >> b >> c;
   
   cout << (long long)(ceil(a/c)*ceil(b/c));
return 0;
}