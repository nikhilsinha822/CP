#include<bits/stdc++.h>
#define int int64_t
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n],s1=0,s2=0,flag=1;
    for(int i=0;i<n-1;i++) cin >> a[i];
    int i=1,j=n,itr=0;
    while(i<j){
        if(s1>a[itr]){
            s1+=i;
            i++;
            continue;
        } 
        if(a[itr]<s2){
            s2+=j;
            j--;
            continue;
        }
        itr++;
        if(itr==n-1) break;
    }
    if(s1==s2 && s1==a[n-2]) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    cout << endl;
}