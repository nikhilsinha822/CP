#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
 long long int n;
 cin >> n;
 long long int a[n],b[n];
 for(int i=0;i<n;i++){
    cin >> a[i];
    b[i]=a[i];
 }  
 sort(b,b+n);
 for(int i=0;i<n;i++){
    if(a[i]==b[n-1])
    a[i]-=b[n-2];
    else
    a[i]-=b[n-1];
 }
 for(int i=0;i<n;i++){
    cout << a[i] << " ";
 }
 cout << '\n';
}
return 0;
}