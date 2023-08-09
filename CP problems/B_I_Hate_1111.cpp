#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        int n,i=0,flag=0;
        cin >> n;
        int rem=n%11;
        int left=n-rem*111;
        if(left%11==0 && left>=0)
        flag=1;
        if(flag)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
return 0;
}