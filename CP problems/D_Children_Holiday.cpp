#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
ll a[20000][3];
ll calc(ll i,ll num){
    ll totTim=a[i][0]*a[i][1]+a[i][2];
    ll ans1=a[i][1]*(num/totTim);
    ll ans2=ans2=min((num%totTim)/a[i][0],a[i][1]);
    return (ans1+ans2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,m;
    cin >> m >> n;
    for(ll i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }

    ll st=0,end=1,mid,sum=0;
    while(sum<m) {
        sum=0;
        end*=2;
        for(int i=0;i<n;i++) sum+=calc(i,end);
    }

    while(end-st>1){
        sum=0;
        mid=(st+end)/2;
        for(int i=0;i<n;i++){
           sum+=calc(i,mid);
        }
        if(sum<m)
            st=mid+1;
        else
            end=mid;
    }

    sum=0;
    for(ll i=0;i<n;i++) sum+=calc(i,st);
    
    if(sum>=m){
        cout << st << endl;
        for(int i=0;i<n;i++){
            if(m-calc(i,st)>=0){
                m-=calc(i,st);
                cout << calc(i,st) << " ";
            }
            else{
                cout << m << " ";
                m=0;
            }
        }
    }
    else{
        cout << end << endl;
        for(int i=0;i<n;i++){
            if(m-calc(i,end)>=0){
                m-=calc(i,end);
                cout << calc(i,end) << " ";
            }
            else{
                cout << m << " ";
                m=0;
            }
        }
    }
    
return 0;
}