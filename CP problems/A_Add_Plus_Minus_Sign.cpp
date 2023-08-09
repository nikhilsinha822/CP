#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      string str;
      cin >> str;
      int cnt=0;
      if(str[0]=='1')
      cnt++;
        for(int i=1;i<n;i++){
            if(str[i]=='0')
            cout << '+';
            else{
            if(cnt%2==0)
            cout << '+';
            else
            cout << '-';
            cnt++;
        }        
        }
        cout << endl;
   }
return 0;
}