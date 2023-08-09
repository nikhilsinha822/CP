#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,d;
    cin >> n >> d;
    pair <ll,ll>a[n+1];
    a[0]=mp(0,0);
    for(int i=1;i<=n;i++){
        ll t1,t2;
        cin >> t1 >> t2;
        a[i] = mp(t1,t2);
    }
    sort(a+1,a+n+1);
    for(int i=0;i<=n;i++){
        a[i].second+=a[i-1].second;
    }
    ll i=1,j=1,ans=0,best=0;
    while(j<=n){
        if(a[j].first-a[i].first<d){
           ans = a[j].second-a[i-1].second;
           best = max(best,ans);
           j++;
        }
        else{
            i++;
            j=max(i,j);
        }
    }
    cout << best << endl;
return 0;
}