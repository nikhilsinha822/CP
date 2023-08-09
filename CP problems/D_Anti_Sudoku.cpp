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
        string str[9];
        for(int i=0;i<9;i++)
        cin >> str[i];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(str[i][j]=='1'){
                    str[i][j]='2';
                }
            }
        }
        // for(int i=0;i<9;i++){
        //     if(str[i][8]=='1')
        //     str[i][7]='1';
        //     // i++;
        // }
        
        for(int i=0;i<9;i++)
        cout << str[i] << endl;
        
    }
return 0;
}