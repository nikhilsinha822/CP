#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define sc second
#define fr first
using namespace std;
map <char,ll>imap;
ll quant[3],cost[3],bal;
ll price(ll mid){
    return max((ll)0,imap['B']*mid-quant[0])*cost[0]+max((ll)0,imap['S']*mid-quant[1])*cost[1]+max((ll)0,imap['C']*mid-quant[2])*cost[2];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    string burg;
    cin >> burg;
    for(int i=0;i<burg.size();i++) imap[burg[i]]++;     
    for(int i=0;i<3;i++) cin >> quant[i];
    for(int i=0;i<3;i++) cin >> cost[i];
    cin >> bal;
    
    ll st=0,end=1,mid;
    while(price(end)<bal) end*=2;
    while(end-st>1){
        mid=(st+end)/2;
        if(price(mid)<bal){
            st=mid;
        }
        else{
            end=mid;
        }
    }
    if(price(end)<=bal){
        cout << end;
    }
    else{
        cout << st;
    }
return 0;
}