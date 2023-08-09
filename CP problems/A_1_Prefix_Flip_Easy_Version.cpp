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
        ll n,c1=0,c2=0;
        vector <ll>v;
        cin >> n;
        string n1,n2;
        cin >> n1 >> n2;
        while(n>0){
            ll i=0;
            if(n1[i]!=n2[n-1-i]){
                v.pb(n);
            }
            else{
                if(n1[i]=='0') n1[i]='1';
                else n1[i]='0';
                v.pb(1);
                v.pb(n);
            }
            string stck;
            for(int i=0;i<n;i++){
                if(n1[i]=='0') stck.pb('1');
                else stck.pb('0');
            }
            for(int i=0;i<n;i++) n1[i]=stck[n-1-i];
            n--;
        }
        // cout << n1 << '\n' << n2 << "\n\n";
        cout << v.size() << " ";
        for(int i=0;i<v.size();i++) cout << v[i] << " ";
        cout << endl;
    }
return 0;
}