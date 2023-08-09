#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   string str,ref="HQ9";
   int cnt=0;
   cin >> str;
   for(int i=0;i<str.size();i++){
    for(int j=0;j<3;j++){
        if(str[i]==ref[j])
        cnt++;
    }
   }
   if(cnt)
   cout << "YES" << endl;
   else
   cout << "NO" << endl;
return 0;
}