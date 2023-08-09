#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,ans=0;
    cin >> n;
    pair <ll,ll>a[n];
    for(int i=0;i<n;i++)
        cin >> a[i].first >> a[i].second;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i].second>=ans)
        ans=min(a[i].first,a[i].second);
        else 
        ans = a[i].first;
    }
    cout << ans;

return 0;
}