#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n,k,ans=0;
        cin >> n >> k;
        string str;
        cin >> str;
        ll count=k;
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                if(count==k){
                    ans++;
                    count=0;
                }  
                else
                count++;     
            }
            else{
                if(count<k){
                    ans--;
                }
                count=0;
            }
        }
        cout << ans << endl;
    }
return 0;
}