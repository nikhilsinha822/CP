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
        ll n,small=1e18,index=0;
        ll i=0,j=n-1;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        sort(a,a+n);
        while(i<n-1){
            if(abs(a[i]-a[i+1])<=small){
                small=abs(a[i]-a[i+1]);
                index=i;
            }
            i++;
        }
        i=0,j=n-1;
        cout << a[index] << " ";
        i=index+2;
        while(i<n){
                cout << a[i] << " ";
                i++;
        }
        i=0;
        while(i<index){
            cout << a[i] << " ";
                i++;
        }
        cout << a[index+1] << endl;

    }
return 0;
}