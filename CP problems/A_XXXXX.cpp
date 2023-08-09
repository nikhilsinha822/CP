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
        ll n,m,ans=-1,sum=0,s1=0,s2=0;
        cin >> n >> m;
        ll a[n];
        for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
        }
        for(int i=0,j=n-1;i<=j;i++,j--){
            if(a[i]%m!=0){
                ans=n-1-i;
                break;
            }
            else if(a[j]%m!=0){
                ans=j;
                break;
            }
        }
        if(sum%m!=0)
        cout << n << endl;
        else
        cout << ans << endl;
    }
return 0;
}