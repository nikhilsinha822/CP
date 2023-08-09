#include<bits/stdc++.h>
using namespace std;
int main()
{
int sum[1000];
sum[0]=0;
for(int i=1;i<1000;i++)
sum[i]=(i*(i+1))/2;
int t;
cin >> t;
while(t--){
      int n,s,tempsum=0,flag=0,large=0;
      cin >> n >> s;
      int a[n];
      for(int i=0;i<n;i++){
      cin >> a[i];
      large=max(large,a[i]);
      tempsum+=a[i];
      }
      for(int i=large;i<1000;i++){
        if(s+tempsum==sum[i])
        flag=1;
      }
      if(flag==1)
      cout << "YES" << endl;
      else
      cout << "NO" << endl;
}
// for(int i=1;i<51;i++)
// cout << sum[i] << " ";
return 0;
}