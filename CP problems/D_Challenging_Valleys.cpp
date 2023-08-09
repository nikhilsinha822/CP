#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
    int c1=0,c2=0;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
    cin >> a[i];
    if(i>0){
    if(a[i]==a[i-1]){
        i--;
        n--;
    }
    }}
    for(int i=1;i<n-1;i++){
       if(a[i]>a[i-1] && a[i]>a[i+1])
       c1++;
       if(a[i]<a[i-1] && a[i]<a[i+1])
       c2++;
    }
    if(c2>=2 || 2*c1>=2 || c1+c2>=2)
    cout << "NO" << endl;
    else
    cout << "YES" << endl;
    //cout << c1 << " " << c2 << endl;
}
return 0;
}