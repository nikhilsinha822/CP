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
        int res,ans=0,prev=-1,curr=-1;
        cin >> res;
        for(int i=0;i<res;i++){
            int a,b;
            cin >> a >> b;
            if(a>10) continue;
            if(b>curr){
                curr=b;
                ans=i+1;
            } 
        }
        cout << ans << endl;
    }
return 0;
}