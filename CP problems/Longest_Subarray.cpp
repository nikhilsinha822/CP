#include<bits/stdc++.h>
#define ll long long
using namespace std;

// const ll N = 500000;
// const ll a[30][N+1];

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   ll t;
   cin >> t;
   while(t--){
        ll n;
        cin >> n;
        ll a[n+1]={0};
        ll ps[30]={0};
        for(int i=1;i<=n;i++){
            cin >> a[i]; 
            for(ll j=0;j<=30;j++){
                if(1<<j & a[i]){
                    ps[j]++;
                }
            }
        }
        ll count=0,flag=1;
        for(ll i=0;i<=n;i++){
            if(ps[i]==1){
                cout<<-1<<endl;
                flag=0;
                break;
            }
            else if(ps[i]>=2){
                count++;
            }
        }        
         if(flag){
            if(count<n/2){
                cout<<n-count<<endl;
            }
            else{
                cout<<count<<endl;
            }
         }
   }
return 0;
}