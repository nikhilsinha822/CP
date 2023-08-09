#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fac(ll n){
    return (n*(n-1))/2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,ans=0,flag=0,pos=0;
    cin >> n;
    ll a[n],b[n];
    for(int i=0;i<n;i++)
    cin >> a[i];
    for(int i=0;i<n;i++)
    cin >> b[i];
    ll c[n];
    for(int i=0;i<n;i++){
    c[i]=a[i]-b[i];
    
    }
    sort(c,c+n);
    int i=0,j=n-1;
        while(i<j){
            if(c[i]+c[j]>0 && j>i){
                j--;
            }
            else{
                ans+=n-1-j;
                i++;
            }
        }

    cout << ans + fac(n-i) << endl;
return 0;
}