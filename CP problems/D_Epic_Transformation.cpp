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
        ll n,ans=0;
        cin >> n;
        vector <int>v;
        map <int,int>freq;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            freq[temp]++;
        }
        for(auto i:freq) v.pb(i.sc);
        sort(v.begin(),v.end());
        if(v[v.size()-1]>n/2){
            cout << v[v.size()-1]-(n-v[v.size()-1]) << endl;
        }
        else {
            cout << n%2 << endl;
        }
    }
return 0;
}