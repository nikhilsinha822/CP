#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,count=0,sum=0;
    vector <ll>v;
    cin >> n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]>=sum){
            sum+=a[i];
            v.pb(a[i]);
        }
        else{
            continue;
        }
    }
    cout << v.size() << endl;
return 0;
}