#include<bits/stdc++.h>
#define ll long long
#define pb push_back
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
        ll n,diff=0,m=-1;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                diff=max(diff,a[i-1]-a[i]);
                a[i]=a[i-1];
            }
        }
        while(diff>0){
            m++;
            diff-=pow(2,m);
        }
        cout << m+1 << endl;
    }
return 0;
}