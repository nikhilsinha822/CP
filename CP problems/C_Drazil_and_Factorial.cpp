#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
     ll n;
     cin >> n;
     string str;
     cin >> str;
     vector <int>v;
     for(int i=0;i<n;i++){
        if(str[i]-'0'==4){
            v.pb(2);
            v.pb(2);
            v.pb(3);
        }
        else if(str[i]-'0'==6){
            v.pb(3);
            v.pb(5);
        }
        else if(str[i]-'0'==8){
            v.pb(2);
            v.pb(2);
            v.pb(2);
            v.pb(7);
        }
        else if(str[i]-'0'==9){
            v.pb(3);
            v.pb(3);
            v.pb(2);
            v.pb(7);
        }
        else if(str[i]-'0'!=1 && str[i]-'0'!=0)
        v.pb(str[i]-'0');        
     }
     sort(v.begin(),v.end(),greater<int>());
     for(auto i=0;i<v.size();i++)
     cout << v[i];
    
return 0;
}