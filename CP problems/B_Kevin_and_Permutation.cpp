#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
      int n;
      cin >> n;
      if(n%2==0){
      for(int i=n;i>n/2;i--){
        cout << i-n/2 << " " << i << " ";
      }}
      else{
      cout << (n+1)/2 << " ";
      for(int i=n;i>(n+1)/2;i--){
        cout << i << " " << i-(n+1)/2 << " ";
      }}
      cout << '\n';
}
return 0;
}