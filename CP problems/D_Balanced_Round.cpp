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
    ll t;
    cin >> t;
    while(t--){
        ll n,k,ans=0,temp=0;
        cin >> n >> k;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])<=k){ 
                temp++;
            }else {
                temp=0;
            }
            ans=max(temp,ans);   
        }
        cout << n-1-ans << endl;
    }
return 0;
}