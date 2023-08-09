#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
 int n,temp,count=0;;
 cin >> n;
 int a[n];
 map<int,int> m;
 for(int i=0;i<n;i++) {    
 cin >> temp;
 m[temp]++;
 }
 for(auto i:m){
    count++;
 }
 if(count == 2)
 cout << n/2+1 << endl;
 else 
 cout << n << endl;

}
return 0;
}