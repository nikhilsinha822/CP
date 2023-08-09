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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, flag = 0, pos = 0, neg = -1000000000000000000, sum = 0;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 0)
            {
                pos = max(pos, a[i]);
                if (neg != -1000000000000000000)
                    sum += neg;
                neg = -1000000000000000000;
            }
            else
            {
                neg = max(neg, a[i]);
                if (pos != 0)
                    sum += pos;
                pos = 0;
            }
        }
        if (neg != -1000000000000000000)
            sum += neg;
        if (pos != 0)
            sum += pos;
        cout << sum << endl;
    }
    return 0;
}