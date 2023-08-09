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
        string str,row,col;
        cin >> str;
        map <char,ll>imap;
        int n=str.size(),flag=0,f=0;
        for(int i=0;i<n;i++) imap[str[i]]++;
        if(str[1]>='1' && str[1]<='9' && n>=4 && imap['R']==1 && imap['C']==1)
            flag=1;

        if(flag){
            int i=1;
            string ans;
            for(;i<n;i++){
                if(str[i]=='C')
                    break;
                row.pb(str[i]);
            }
            for(;i<n;i++){
                if(str[i]=='C')
                    continue;
                col.pb(str[i]);
            }
            ll cl=0,nn=col.size();
            for(int i=0;i<nn;i++){
                cl=cl*10+(col[i]-'0');
            }
            while(cl){
                char temp;
                if(cl%26==0){
                    temp='Z';
                    cl/=26;
                    cl--;
                }
                else{
                    temp='A'-1+(cl%26);
                    cl/=26;
                }
                ans.pb(temp);
            }
            nn=ans.size();
            for(int i=nn-1;i>=0;i--)
            cout << ans[i];
            cout << row << endl;
        }
        else{
            int i=0;
            ll ans=0;
            for(;i<n;i++){
                if(str[i]>='0' && str[i]<='9')
                    break;
                col.pb(str[i]);
            }
            for(;i<n;i++){
                row.pb(str[i]);
            }
            int nn=col.size();
            for(int i=0;i<nn;i++){
                ans+=(col[nn-1-i]-'A'+1)*pow(26,i);
            }
            cout << 'R' << row << 'C' << ans << endl;
        }

        // cout << col << "   " << row << endl;
    }
return 0;
}