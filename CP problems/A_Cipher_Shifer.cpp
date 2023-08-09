#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string str;
        char flag;
        cin >> str;
        for(int i=0,j=1;j<n;){
            if(str[i]!=str[j] || i==j){
                j++;
            }
            else{
                cout << str[i];
                i=j+1,j++;
            }
        }
        cout << endl;
    }
return 0;
}