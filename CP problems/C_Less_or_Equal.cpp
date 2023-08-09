#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,m;
    cin >> n >>m;
    ll a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++)
    cin >> a[i];
    sort(a+1,a+n+1);
    if(m==0 && a[1]-1>0)
    cout << a[1]-1 << endl;
    else if(m!=0 && a[m]!=a[m+1])
    cout << a[m] << endl;
    else 
    cout << -1 << endl;
return 0;
}