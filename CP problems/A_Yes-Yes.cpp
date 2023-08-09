#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
    int flag=0;
   string str;
   cin >> str;
   if(str.size()==1){
    if(str[0]=='Y' || str[0]=='e' || str[0]=='s')
    flag=0;
    else
    flag=1;
   }
   else{
   for(int i=0;i<str.size()-1;i++){
    if(str[i]=='Y' && str[i+1]=='e')
    continue;
    else if(str[i]=='e' && str[i+1]=='s')
    continue;
    else if(str[i]=='s' && str[i+1]=='Y')
    continue;
    else{
    flag=1;
    break;}
   }   
   }
   if(flag==0)
   cout << "YES" << endl;
   else
   cout << "NO" << endl;
}
return 0;
}