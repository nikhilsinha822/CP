#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int n,m;
   cin >> n >> m;
   if(n*m%2==0 && min(n,m)%2==0)
   cout << "Malvika" << endl;
   else
   cout << "Akshat" << endl;
return 0;
}