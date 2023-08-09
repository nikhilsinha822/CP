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
        ll n,count=0,flag=0;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        ll temp=-1;
        for(int i=n-2;i>=0;i--){
            if(a[i+1]<=a[i]){
                if(flag && a[i+1]!=a[i]){
                temp=i;
                break;
                }
                else
                continue;
            }
            else{
                flag=1;
            }
        }
        cout << temp+1 << endl;
    }
return 0;
}