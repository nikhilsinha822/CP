#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
   long long n,sum=0;
   cin >> n;
   long long a[n],b[n];
   for(int i=0;i<n;i++){
   cin >> a[i];
   sum+=a[i];}
   for(int i=0;i<n;i++)
   cin >> b[i];
   sort(b,b+n);
   for(int i=0;i<n-1;i++)
   sum+=b[i];
   cout << sum << '\n';
}
return 0;
}