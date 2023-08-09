#include<bits/stdc++.h>
#define ll long long
#define pb push_back
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
        ll count=0,nv=0,ans=1;
        ll N=1e9+7;
        int n,m,start=0,end=0,flag=0,flg=0;
        vector <ll>v;
        cin >> n >> m;
        string str;
        cin >> str;
        for(int i=0;i<n;i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                start=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                end=i;
                break;
            }
        }
        for(int i=start;i<=end;i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                if(flag){
                    flag=0;
                    v.pb(nv);
                    nv=0;
                }
                flg=1;
                count++;
            }
            else if(flag){
                nv++;
            }
            
            if(count==m){
                flag=1;
                count=0;
            }

        }
        for(int i=0;i<v.size();i++)
         ans=(ans*(v[i]+1))%N;
         if(flg==0)
         cout << 0 << endl;
         else
        cout << ans << endl;
    }
return 0;
}