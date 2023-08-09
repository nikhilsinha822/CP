#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
  long long n,q,ce=0,co=0,sum=0;;
  cin >> n >> q;
  int a[n];
  for(int i=0;i<n;i++){
  cin >> a[i];
  sum+=a[i];
  if(a[i]%2==0)
  ce++;
  else
  co++;
  }
  while(q--){
    long long bit,num;
    cin >> bit >> num;
    if(bit)
    sum+=num*co;
    else
    sum+=num*ce;
    if(num%2!=0 && bit==1)
    ce+=co,co=0;
    if(num%2!=0 && bit==0)
    co+=ce,ce=0;
    cout << sum << endl;
  }    
}
return 0;
}