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
        ll n,flag=0,ans=1;
        cin >> n;
        string a;
        cin >> a;
        for(int i=0;i<n/2;i++){
            if(i!=n-1-i){
                if(a[i]==a[n-1-i]){
                    ans=1;
                    if(flag){
                        ans=2;
                    }
                }
                else{
                    flag=1;
                    if(ans==2){
                        ans=0;
                        break;
                    }
                }
            }
        }
        if(ans)
        cout << "Yes" << endl;
        else
        cout << "No" << endl;
    }
return 0;
}