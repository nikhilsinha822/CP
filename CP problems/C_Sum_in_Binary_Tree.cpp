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
        ll n,sum=0;
        cin >> n;
        while(n){
            if(n%2){
                sum+=n;
                n=(n-1)/2;
            }
            else{
                sum+=n;
                n/=2;
            }
        }
        cout << sum << endl;
    }
return 0;
}