#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      int n,cz=0,co=0,temp=0,temp1=0,temp2=0;
      cin >> n;
      string str;
      cin >> str;
      for(int i=0;i<n;i++){
        if(str[i]=='0')
        cz++;
        else
        co++;
      }
      for(int i=0;i<n;i++){
        if(str[i]=='0')
        temp++;
        else{
        temp1=max(temp1,temp);
        temp=0;}
      }
      temp=0;
      for(int i=0;i<n;i++){
        if(str[i]=='1')
        temp++;
        else{
        temp2=max(temp2,temp);
        temp=0;}
      }
      cout << temp1 << " " << temp2 << endl;
   }
return 0;
}