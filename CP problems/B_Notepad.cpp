#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      int n,flag=0;
      cin >> n;
      string str;
      cin >> str;
      map <string,int>imap;
      string temp;
      for(int i=0;i<str.size()-1;i++){
         
         //cout << temp << " ";
         if(str[i]==str[i+1] && str[i]==str[i+2] && str[i+3]!=str[i])
         continue;
         temp = string(1,str[i])+str[i+1];
         imap[temp]++;
      }
      // if(n%2)
      // imap[temp]++;
      // int cnt=0,big=0;
      // char mark;
      // for(int i=0;i<str.size();i++){
      //    if(str[i]==str[i+1])
      //    cnt++;
      //    else
      //    {
      //       mark=str[i-1];
      //       big=max(cnt,big);
      //       cnt=0;
      //    }
      // }
      //cout << mark << big << " ";
      for(auto i:imap){
      // if(i.first==string(2,mark))
      //    flag=1;
      if(i.second>1)
      flag=1;}
      if(flag)
      cout << "YES" << endl;
      else
      cout << "NO" << endl;
   }
return 0;
}