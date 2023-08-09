    #include<bits/stdc++.h>
    #define ll int
    #define pb push_back
    #define mp make_pair
    using namespace std;
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        cout.precision(15); cout << fixed;
        ll n,win=-1e9;
         cin >> n;
        map <string,ll>imap,winner;
        pair<string,ll>a[n];
        for(int i=0;i<n;i++){
            string temp;
            ll r;
            cin >> temp >> r;
            a[i]=mp(temp,r);
            imap[temp]+=r;
        }
        for(auto i:imap){
            win=max(win,i.second);
        }
        for(auto i:imap){
            if(i.second==win){
                imap[i.first]=1;
            }
            else{
                imap[i.first]=0;
            }
        }
        for(int i=0;i<n;i++){
            if((winner[a[i].first]+a[i].second)>=win && imap[a[i].first]==1){
                cout << a[i].first << endl;
                break;
            }
            else
            winner[a[i].first]+=a[i].second;
        }
        
    return 0;
    }