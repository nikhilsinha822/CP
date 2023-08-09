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
        int n,flag=0,ans=0;
        cin >> n;
        ll a[n],b[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        for(int i=0;i<n;i++)
        cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++)
        if(a[i]<=b[i])
        flag=1;
        if(flag)
        cout << 0 << endl;
        else{
            int i=0,j=0;
            while(i<n){
                if()
            }
        }    
    }
return 0;
}