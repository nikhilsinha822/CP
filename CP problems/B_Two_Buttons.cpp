#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(15);
    cout << fixed;
    ll n, m, count=0, c2=0;
    cin >> n >> m;
    if(m<=n){
        cout << n-m << endl;
    }
    else{
    
    while(n!=m){
        if(m%2==0 && m>n)
        m/=2;
        else
        m++;
        count++;
    }
    cout << count << endl;
    }
    return 0;
}