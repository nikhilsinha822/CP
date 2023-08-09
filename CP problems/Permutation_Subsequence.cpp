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
        ll n,flag=1,flag2=1,ans=0,N=1000000007;
        cin >> n;
        ll a[n],front[n],back[n],b[n];
        map <int,int>imap;
        for(int i=0;i<n;i++){
            cin >> a[i];
            b[i]=a[i];
            imap[a[i]]=1;
        }
        sort(b,b+n);
    // for(int i=0;i<n;i++){
    //     cout << b[i] << " ";
    // }
        for(int i=1;i<n;i++){
            if(b[i]-b[i-1]<=1){
                flag=max(flag,b[i]);
            }
            else{
                break;
            }
        }
        //flag--;
        ans=flag;
        for(int i=0;i<n;i++){
            if(imap[a[i]]==0 && a[i]<i+1){
                //cout << flag;
                ans+=(flag-(a[i]-1))%N;
                
            }
            imap[a[i]]=0;
        }
        cout << ans%N << endl;

    }
return 0;
}