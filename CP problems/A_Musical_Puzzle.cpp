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
        int n,count=0;
        map <string,int>imap;
        cin >> n;
        string str;
        cin >> str;
        for(int i=0;i<n-1;i++){
            string temp;
            temp.push_back(str[i]);
            temp.push_back(str[i+1]);
            imap[temp]++;
        }
        for(auto i:imap){
            count++;
        }
        cout << count << endl;
    }
return 0;
}