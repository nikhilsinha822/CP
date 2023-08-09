#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
        int n,ans=0,temp=0;
        cin >> n;
        int a[n];
        map<int, int> imap;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            imap[a[i]]++;
        }
        for(auto i:imap){
            ans+=(i.second+temp)/i.first;
            temp=(i.second+temp)%i.first;
        }
        cout << ans << endl;
    }
    return 0;
}