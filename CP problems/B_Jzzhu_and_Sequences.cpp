#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll x,y,query,ans;
    ll M=1e9+7;
    cin >> x >> y >> query;
    x = (x+M)%M;
    y = (y+M)%M;
    switch((query-1)%6){
        case 0: ans=(x+M)%M;
            break;
        case 1: ans=(y+M)%M;
            break;
        case 2: ans=(y-x+M)%M;
            break;
        case 3: ans=(-x+M)%M;
            break;
        case 4: ans=(-y+M)%M;
            break;
        case 5: ans=(x%M-y%M+M)%M;
            break;
    }
    cout << ans << endl;
return 0;
}