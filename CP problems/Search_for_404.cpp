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
        ll n,ans=0,N=1e9+7,flag=-1;
        cin >> n;
        int c4=0,c0=0;
        vector <ll>v;
        string str;
        cin >> str;
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                c0++;
                if(flag)
                v.pb(c4);
                c4=0;
                flag=0;
            }
            else if(str[i]=='4'){
                c4++;
                if(flag==0)
                v.pb(c0);
                c0=0;
                flag=1;
            }
            else{
                v[v.size()-1]+=1;
                c4++;
                c0++;
            }
        }
        // cout << ans%N << endl;
    }
return 0;
}