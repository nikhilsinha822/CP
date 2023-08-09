#include<bits/stdc++.h>
#define int int64_t
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
void solve(){
    int n,k,ans=0;
    cin >> n >> k;
    int a[n];
    map <int,int>imap;
    for(int i=0;i<n;i++){ 
        cin >> a[i];
        imap[a[i]]++;
    }
    int i=0,j=n-1,c1=0,c2=0;
    while(i<j){
        if(c1!=k){
            if(a[j]==a[n-1]) c1++;
            if(c1!=k)
            j--;
        } 
        if(c2!=k){
            if(a[i]==a[0]) c2++;
            if(c2!=k)
            i++;
        }
        if(c1==k && c2==k) break;
    }
    if((c1==k && c2==k) || (a[0]==a[n-1] && imap[a[0]]>=k) || (n==1)){
        cout << "YES" << endl;  
    }
    else {
         
        cout << "NO" << endl;
    }
    
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
}