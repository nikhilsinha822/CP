#include<bits/stdc++.h>
#define int int64_t
#define pb push_back
#define mp make_pair
#define sc second
#define fr first
using namespace std;
bool fun(int n, int a,int b){
    if(a==1) return (n-1)%b==0;
    for(int i=1;i<=n;i*=a)
        if((n-i)%b==0) return true;
    return false;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        if(fun(n,a,b))
        cout << "Yes" << endl;
        else
        cout << "No" << endl;
    }
}