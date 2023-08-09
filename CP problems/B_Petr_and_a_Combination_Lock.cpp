#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    
        ll n,sum=0,a1=0,b1=0,flag=0;
        cin >> n;
        ll a[n]={0},b[n]={-1};
        for(int i=0;i<n;i++)
        cin >> a[i];

        for(int j=0;j<1<<n;j++){
            for(int i=0;i<n;i++){
                if(j & 1<<i)
                sum+=a[i];
                else
                sum-=a[i];
            }
            if(sum==0 || sum%360==0){
                flag=1;
                break;
            }
            sum=0;
        }

        if(flag)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;

return 0;
}