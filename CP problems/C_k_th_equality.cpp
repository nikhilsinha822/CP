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
        ll a,b,c,k;
        cin >> a >> b >> c  >> k;
        if(b<a) swap(a,b);
        ll sa,ea,sb,eb;
        sa=pow(10,a-1);
        sb=pow(10,b-1);
        ea=pow(10,a)-1;
        eb=pow(10,b)-1;
        ll a1=sa,a2=sb;
        while(k--){
            if(a1==a2) a2++;
            a2++;
            if(a2>eb) a1++,a2=sb;
            if(a1>ea) break;
            if((a1+a2)/(ll)pow(10,c)) break;
        }
        if((a1+a2)/(ll)pow(10,c)) cout << -1 << endl;
        else
        cout << a1 << " + " << a2 << " = " << a1+a2 << endl;
    }
return 0;
}