#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int n;
   cin >> n;
   int x[n],y[n],z[n];
   for(int i=0;i<n;i++){
    cin >> x[i] >> y[i] >> z[i];
   }
   for(int i=1;i<n;i++){
       x[0]+=x[i];
       y[0]+=y[i];
       z[0]+=z[i];     
   }
   if(x[0]==0 && y[0]==0 && z[0]==0)
   cout << "YES";
   else
   cout << "NO";
return 0;
}