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
        ll temp;
        cin>> temp;
        if(temp>4 || temp==1){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
return 0;
}