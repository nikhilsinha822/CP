#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
  int n,temp=0;
  cin >> n;
  string str;
  cin >> str;
  for(int i=0;i<n;i++){
  temp = max(temp,(int)str[i]);}
  cout << temp-'a'+1 << endl;
}
return 0;
}