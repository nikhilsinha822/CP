#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        if(n%2){
            if(n%3){
                cout << n/2 << " " << n/2 << " " << 1 << endl;
            }
            else{
                cout << n/3 << " " << n/3 << " " << n/3 << endl;
            }
        }
        else{
            if(n%3){
                if((n/2)%2)
                cout << n/2-1 << ' ' << n/2-1 << ' ' << 2 << endl;
                else
                cout << n/2 << ' ' << n/4 << ' ' << n/4 << endl;
            }
            else{
                cout << n/3 << " " << n/3 << " " << n/3 << endl;
            }
        }
            
        
    }
return 0;
}