#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    int n,m,a,b;
    cin >> m >> n >> a >> b;
    if(b/n>=a)
    cout << m*a << endl;
    else{
        int temp=(m%n)*a;
    cout << (m/n)*b + min(temp,b) << endl;}
return 0;
}