#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n,k,l=0;
        cin >> n >> k;
        map <int,int>imap;
        ll a[n],b[k];
        for(int i=0;i<n;i++){
        cin >> a[i];
        imap[a[i]]++;
        }
        
        if(k<imap.size())
        cout << -1 << endl;
        else{
            for(auto i:imap){
            b[l]=i.first;
            l++;
        }
        for(int i=l;i<k;i++){
            b[i]=1;
        }
            cout << n*k << endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<k;j++){
                    cout << b[j] << " ";
                }
            }
            cout << endl;
        }
        
    }
return 0;
}