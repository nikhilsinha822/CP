#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool compare_pair(const pair<int, int> &pair1, const pair<int, int> &pair2)
{
    int result = 1;
    if ((pair2.second > pair1.second) || ((pair2.second == pair1.second) && (pair2.first > pair1.first)))
    {
        result = 0;
    }
    return result;
}
// unordered_map <ll,ll> imap;
// void seive(){
//     bool prime[N+1];
//     memset(prime,1,sizeof(prime));
//     for(ll i=2;i<=N;i++){
//         if(prime[i]){
//             imap[i*i]++;
//             for(ll j=i*i;j<=N;j+=i){
//                 prime[j]=0;
//             }
//         }
//     }
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(15);
    cout << fixed;
    ll n;
    cin >> n;
    ll a[n + 1],b[n+1];
    a[0] = 0,b[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        a[i] += a[i - 1];
    }
    sort(b+1,b+n+1);
    for (int i = 1; i <= n; i++)
    {
        
        b[i] += b[i - 1];
    }
    ll q;
    cin >> q;
    while(q--)
    {
        ll type,l,r;
        cin >> type >> l >> r;
        if(type==2)
            cout << b[r]-b[l-1];
        else 
            cout << a[r]-a[l-1];

        cout << endl;
    }
    return 0;
}