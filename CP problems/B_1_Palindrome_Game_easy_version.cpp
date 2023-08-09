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
        int n,count=0;
        cin >> n;
        string str;
        cin >> str;
        for(int i=0;i<n;i++){
            if(str[i]=='0')
            count++;
        }
        if(n%2==0){
            cout << "BOB" << endl;
        }
        else{
            if(n==1){
                if(count)
                    cout << "BOB" << endl;
                else
                    cout << "ALICE" << endl;
            }
            else if(count%2){
                if(count==1)
                cout << "BOB" << endl;
                else
                cout << "ALICE" << endl;
            }
            else{
                cout << "BOB" << endl;
            }

        }
        
    }
return 0;
}