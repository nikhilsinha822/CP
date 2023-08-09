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
        ll n,ans=-1,num,cur=100000;
        cin >> n;
        vector <ll>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        num=a[n-1];
        do{
            for(int i=a.size()-1;i>=0;i--){
                num^=a[i];
                ans=max(num,ans);
            }
            if(ans<num)
                a.pb(num);
            else break;
            ans=max(num,ans);
        } while(cur--);
        cout << ans << endl;
    }
return 0;
}