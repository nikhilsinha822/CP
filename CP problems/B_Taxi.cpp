#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int n,temp;
   cin >> n;
   map <int,int>m;
   
   for(int i=0;i<n;i++){
   cin >> temp;
   m[temp]++;
   }
   int tx=m[4]+m[3]+ceil(m[2]/2.0);

   if(m[3]<m[1]){
      m[1]-=m[3];
      if(m[2]%2)
      m[1]-=2;
      tx+=ceil(m[1]/4.0);
   }
   cout << tx;
return 0;
}