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
        string num1,num2;
        cin >> num1 >> num2;
        ll n=num1.size(),m=num2.size(),count=0;
        ll a[m]={0},b[m],ans=0;
        for(int i=m-n;i<m;i++) a[i]=num1[i-m+n]-'0';
        for(int i=0;i<m;i++) b[i]=num2[i]-'0';
        for(int i=0;i<m;i++){
            ans+=abs(a[i]-b[i]);
        }
        for(int i=0;i<m;i++){
            if(a[i]==b[i]){
                count++;
            }
            else{
                break;
            }
        }
        ll posAns=0;
        if(count==m){
            ans=0;
        }
        else{
            posAns=abs(a[count]-b[count])+(m-1-count)*9;
            ans=max(ans,posAns);
        }
       

        cout << ans << endl;
    }
return 0;
}