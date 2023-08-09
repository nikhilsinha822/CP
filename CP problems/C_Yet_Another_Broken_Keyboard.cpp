#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,m,count=0,ans=0;
    map <ll,ll>imap;
    cin >> n >> m;
    string str;
    cin >> str;
    for(int i=0;i<m;i++){
        char temp;
        cin >> temp;
        imap[temp]=1;
    }
    for(int i=0;i<n;i++){
        if(imap[str[i]]==0){
            ans += (count*(count+1))/2; 
            count=0;
        }
        else{
            count++;
        }
    }
    ans += (count*(count+1))/2; 
    cout << ans << endl;
return 0;
}