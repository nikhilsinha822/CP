#include<bits/stdc++.h>
using namespace std;
int main(){
    //m.find(str)==m.end()
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int n;
   string str;
   cin >> n;
   map <string,int>m;
   for(int i=0;i<n;i++){
    cin >> str; 
    m[str]++;
    if(m[str]<2)
        cout << "OK" << '\n';
    else
        cout << str << m[str]-1 << '\n';
   } 
return 0;
}