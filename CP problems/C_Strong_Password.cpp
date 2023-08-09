#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
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
        string db,l1,r1;
        int m,track=-1,flag=0,nstr=-1;
        cin >> db >> m >> l1  >> r1;
        for(int j=0;j<m;j++){
            for(int k=l1[j]-'0';k<=r1[j]-'0';k++){
                flag=0;
                for(int i=nstr+1;i<db.size();i++){
                    if(k==db[i]-'0'){
                        if(track<i) track=i;
                        flag=1;
                        break;
                    }
                }
                if(!flag) break;
            }
            nstr=max(track,nstr);
            if(!flag) break;
        }
        if(!flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
return 0;
}