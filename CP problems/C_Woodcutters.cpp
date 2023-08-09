#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,count=0,flag=0;
    cin >> n;
    ll a[n+1],b[n+1],c[n];
    c[0]=0;
    a[0]=0,b[0]=0;
    for(int i=1;i<=n;i++){
        cin >> a[i] >> b[i];
    }
    for(int i=1;i<n;i++){
        c[i]=a[i+1]-a[i]-1;
    }
    for(int i=2;i<n;i++){
        if(b[i]<=c[i-1]){
            count++;
        }
        else if(b[i]<=c[i]){
            count++;
            flag=i;
            c[i]-=b[i];
        }
    }
    if(n==1){
        cout << 1 << endl;
    }
    else 
    cout << count+2 << endl;


return 0;
}