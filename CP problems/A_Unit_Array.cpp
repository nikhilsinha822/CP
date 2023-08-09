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
        ll n;
        cin >> n;
        map <ll,ll>imap;
        for(int i=0;i<n;i++){
            ll temp;
            cin >> temp;
            imap[temp]++;
        }
        if(imap[1]>=imap[-1]){
            if(imap[-1]%2)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else{
            if(n%2)
                if((n-(n/2+1))%2)
                cout << n/2+1-imap[1]+1 << endl;
                else
                cout << n/2+1-imap[1] << endl;
            else
                if((n-(n/2))%2)
                cout << n/2-imap[1]+1 << endl;
                else
                cout << n/2-imap[1] << endl;
        }
    }
return 0;
}