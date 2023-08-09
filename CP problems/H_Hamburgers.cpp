#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define sc second
#define fr first
using namespace std;
map <char,ll> nd;
ll stc[3],prc[3],bal;
ll price(ll num){
    ll o1=0,o2=0,o3=0;
    o1=max((nd['B']*num-stc[0])*prc[0],(ll)0);
    o2=max((nd['S']*num-stc[1])*prc[1],(ll)0);
    o3=max((nd['C']*num-stc[2])*prc[2],(ll)0);
    return o1+o2+o3;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    string bur;
    cin >> bur;
    for(int i=0;i<bur.size();i++) nd[bur[i]]++;
    for(int i=0;i<3;i++) cin >> stc[i];
    for(int i=0;i<3;i++) cin >> prc[i];
    cin >> bal;
    ll st=0,end=1,mid;
    while(price(end)<=bal){
        end*=2;
    }
    while(end-st>1){
        mid=(st+end)/2;
        if(price(mid)<bal)
            st=mid;
        else
            end=mid;
    }
    if(price(end)<=bal){
        cout << end << endl; 
    }
    else{
        cout << st << endl;
    }
return 0;
}