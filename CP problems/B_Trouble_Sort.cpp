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
        ll n,flag=1,sm=__INT_MAX__,lg=0,t1,t2;
        cin >> n;
        ll a[n+1]={0},b[n+1],count=0;
        //pair <ll,ll>P[n+1];
        for(int i=1;i<=n;i++){
            cin >> a[i];
            if(a[i-1]>a[i])
            flag=0;
        }
        for(int i=1;i<=n;i++){
            cin >> b[i];
            if(b[i])
            count++;
        }
        if((count!=0 && count!=n) || flag)
        cout << "Yes" << endl;
        else{
        cout << "No" << endl;
        }
    }
return 0;
}