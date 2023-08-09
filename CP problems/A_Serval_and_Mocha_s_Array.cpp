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
        ll n,ans=1000000000000000000;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    ans =min(__gcd(a[i],a[j]),ans);
                }
            }
        }
        if(ans<=2)
        cout << "Yes" << endl;
        else
        cout << "No" << endl; 
    }
return 0;
}