#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,m,ans=0;
    cin >> n >> m;
    while(1){
        if(n>m) swap(m,n);
        m-=2;
        n-=1;
        if(min(n,m)<0) break;
        ans++;
    }
    cout << ans << endl;
return 0;
}