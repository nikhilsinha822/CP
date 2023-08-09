#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fac=1;
    for(int i=1;i<=n;i++)
    fac*=i;
    return fac;
}
int main()
{
int t;
cin >> t;
while(t--){
     int n;
     cin >> n;
     int a[n];
     for(int i=0;i<n;i++){
        cin >> a[i];
     } 
     cout << factorial(10-n)/(factorial(8-n)*2)*6 << endl;
}
return 0;
}