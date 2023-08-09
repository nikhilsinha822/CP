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
        ll n,past=0,flag=0;
        cin >> n;
        vector <ll>v;
        v.pb(0);
        while(n--){
            ll temp;
            cin >> temp;
            v.pb(temp);
            if(temp>=past && flag==0){
                cout << 1;
                past=temp;
            }
            else if(temp<=v[1] && temp<past && flag==0){
                cout << 1;
                flag=1;
                past=temp;
            }
            else if(temp<=v[1] && flag==1 && temp>=past){
                cout << 1;
                past=temp;
            }
            else{
                cout << 0;
            }
            
        }   
        cout << endl;
    }
return 0;
}