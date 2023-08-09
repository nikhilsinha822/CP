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
        ll y=0,ad1=0,ad2=0,temp=0;
        int n,f=0;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n-1;i++){
            temp+=a[i];
            ad1=max(temp,ad1);
            if(temp<0) temp=0;
            y+=a[i];
        }
        temp=0;
        y+=a[n-1];
        for(int i=1;i<n;i++){
            temp+=a[i];
            ad2=max(temp,ad2);
            if(temp<0) temp=0;
        }
        
        if(y>max(ad1,ad2)) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
return 0;
}