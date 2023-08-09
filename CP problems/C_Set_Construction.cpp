#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
      int n;
      cin >> n;
      int b[n]={0};
      string str;
      for(int i=0;i<n;i++){
      cin >> str;
      for(int j=0;j<n;j++){
        if(str[j]=='1'){
            b[i]+=1;
        }
      }
      }
      
    //   for(int i=0;i<n;i++)
    //   cout << b[i] << " ";
    //   cout << '\n';
}
return 0;
}