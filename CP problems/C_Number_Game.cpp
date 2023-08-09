#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n,flag=0;
        cin >> n;
        for(int i=2;i<sqrt(n);i++)
        if(n%i==0 && i%2)
        flag=1;
        if(n==2 || (n!=1 && n%2) || ((n&(n-1))!=0 && (n%4==0 || flag)))            
        cout << "Ashishgup" << endl;
        //if(n==1 || ((n&(n-1))==0 && n!=2) || (n/2)%2)
        else
        cout << "FastestFinger" << endl;
    }
return 0;
}