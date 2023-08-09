#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   string str,vow="AEIOUYaeiouy";
   int flag=0;
   cin >> str;
   for(int i=0,flag=0;i<str.size();i++){
    for(int j=0;j<12;j++){
      flag=1;
    if(str[i]==vow[j]){
    flag=0;
    break;
    }
    
    }
    if(flag==0){
      continue;
    }
    else{
      if(str[i]<'a')
      cout << "." << (char)(str[i]+'a'-'A');
      else
      cout << "." << str[i];
      }
   }
return 0;
}