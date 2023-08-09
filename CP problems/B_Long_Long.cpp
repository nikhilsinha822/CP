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
        ll n,sum=0,ans=0,flag=1,count=0;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) sum+=abs(a[i]);
        for(int i=0;i<n;i++){
            if(a[i]<0){
                if(flag){
                count++;
                flag=0;
                }
            }
            if(a[i]>0) flag=1;
        }
        cout << sum << " " << count << endl;
    }
return 0;
}