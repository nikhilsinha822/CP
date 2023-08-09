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
        vector <string>v;
        int n,flag=1;
        cin >> n;
        for(int i=0;i<n;i++){
            string temp;
            cin >> temp;
            temp+='1';
            v.push_back(temp);
        }
        string temp;
        for(int i=0;i<=n;i++){
            temp.push_back('1');
        }
        v.push_back(temp);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]=='1' && v[i][j+1]=='0' && v[i+1][j]=='0'){
                    flag=0;
                    break;
                }
            } 
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
return 0;
}