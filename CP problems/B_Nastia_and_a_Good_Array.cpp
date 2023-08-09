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
        ll n,small=1e18,index=0,flag=0,temp,ans=1;
        cin >> n;
        ll a[n+1];
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=1;i<=n;i++) {
            if(small>a[i]){
                small=a[i];
                index=i;
            }
        }
        for(int i=1;i<n;i++) if(__gcd(a[i],a[i+1])!=1) ans=0;
        if(ans) cout << 0 << endl;
        else{
        temp=small;
        if(index==1) flag=1;
        cout << n-flag << endl;
        
        if(index!=1)
            cout << 1 << " " << index << " " << a[index] << " " << a[1] << endl;
            
        for(int i=1;i<n-1;i++)
            cout << i << " " << i+1 << " " << ++small << " " << temp << endl;

        ll temp2=small;
        small++;
        while(1){
            if(__gcd(small,temp)!=1 || __gcd(small,temp2)!=1) small++;
            else  break;
        };
        cout << n-1 << " " << n << " " << small << " " << temp << endl;}
    }
return 0;
}