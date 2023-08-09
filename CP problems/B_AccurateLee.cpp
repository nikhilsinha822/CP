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
        ll n,flag=1;
        cin >> n;
        ll i=0,j=n-1;
        string str;
        cin >> str;
        while(str[j]=='1')
        j--;
        while(str[i]=='0')
        i++;
        if(i>j)
        cout << str << endl;
        else{
            for(int k=0;k<n;k++){
                if(k<i || k>j)
                cout << str[k];
                else if(flag){
                    cout << 0;
                    flag=0;
                }
            }
            cout << endl;
        }
    }
return 0;
}