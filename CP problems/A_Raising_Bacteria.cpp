#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int n;
   cin >> n;
   bitset<1000000000> b1(n);

   cout << b1.count();
return 0;
}