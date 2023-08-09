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
        int n,e=0,o=0,od=1e9,ev=1e9;
        cin >> n;
        for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(temp%2){
            od=min(od,temp);
            o++;
        }
        else
            ev=min(ev,temp);
            
        }
        if(o==0 || (od<ev))
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
return 0;
}