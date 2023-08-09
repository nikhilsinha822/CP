#include<bits/stdc++.h>
# define ll long long
using namespace std;
const ll N = 998244353;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
        ll n;
        cin >> n;
        ll temp,prev,ans=0,flag=0,flg=1;
        for(int i=0;i<n;i++){
            cin >> temp;
            if(i==0 && temp==2){
                cout << 0 << endl;
                flg=0;
                break;
            }
            else if(i==0 && temp!=2){
                ans=2;
            }
            else if(i>0 && temp==0)
                ans*=2;
            else if(i>0 && temp==1)
                ans+=2;
            else if(i>0 && temp==2 && flag==0 && prev==1){
                flag=1;
                ans+=2;
            }
            else if(i>0 && temp==2 && flag==0 && prev==0){
                flag=1;
                ans+=2;
            }
            else if(i>0 && temp==2 && flag==1){
                ans*=2;
            }
            if(i>0 && flag==1 && temp==1){
                cout << 0 << endl;
                flg=0;
                break;
            }
            ans%=N;
            prev=temp;
        }
    if(flg)
    cout << ans << endl;
return 0;
}