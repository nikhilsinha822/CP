#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,x,y,ans=0;
    cin >> n >> x >> y;
    n-=1;
    ans+=min(x,y);
    ll st=0,end=2,mid;
    while(end/x+end/y<n) end*=2;
    while(end-st>1){
        mid=(st+end)/2;
        if(mid/x+mid/y<n){
            st=mid+1;
        }
        else{
            end=mid;
        }
    }
    if(st/x+st/y>=n){
        cout << (ll)(st+ans) << endl;
    }
    else{
        cout << (ll)(end+ans) << endl;
    }
return 0;
}