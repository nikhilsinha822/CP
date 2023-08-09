#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        pair<ll,ll> zero=mp(0,0),one=mp(0,0);
        ll ans=1e18;
        string str;
        cin >> str;
        int n=str.size();
        for(int i=0;i<n;i++){
            if(str[i]=='0')
            zero.second++;
            else
            one.second++;
        }
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                zero.second--;
                ans = min(min(zero.second+one.first,one.second+zero.first),ans);
                zero.first++;
            }
            else{
                one.second--;
                ans = min(min(zero.second+one.first,one.second+zero.first),ans);
                one.first++;
            }
        }
        cout << ans << endl;
    }
return 0;
}