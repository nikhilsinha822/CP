#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define sc second
#define fr first
using namespace std;
int value(char c){
    switch(c){
        case 'A': return 1;
        case 'B': return 10;
        case 'C': return 100;
        case 'D': return 1000;
        case 'E': return 10000;
        default: return 0;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        string seq;
        cin >> seq;
        ll n=seq.size(),impact=-1e18;

        vector <ll>v,rev(n);
        for(int i=0;i<n;i++)
            v.pb(value(seq[i]));
        rev[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--)
            rev[i]=max(v[i],rev[i+1]);

        map <ll,ll>f;
        for(int i=0;i<n;i++){
            ll calc=0;
            for(int num=1;num<=10000;num*=10){
                if(num<v[i])
                calc -= f[num]*num;
                else
                calc += f[num]*num;               
            }
            impact=max(impact,calc);
            f[v[i]]++;
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            if(v[i]<rev[i])
            ans-=v[i];
            else
            ans+=v[i];
        }
        cout << impact << endl;
    }
return 0;
}