#include <bits/stdc++.h>
#define ll long long
#define pb push_back
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
        ll n, temp = 0, flag = 0, A = 0, B = 0, C = 0;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<ll> v;
        v.pb(0);
        for (int i = 0, j = n - 1;;)
        {
            if (flag == 0)
            {
                if (v.back() >= temp && i<=j)
                {
                    temp += a[i];
                    i++;
                }
                else
                {
                    v.pb(temp);
                    temp = 0;
                    if (i > j)
                        break;
                    flag = 1;
                }
            }
            else
            {
                if (v.back() >= temp && i<=j)
                {
                    temp += a[j];
                    j--;
                }
                else
                {
                    v.pb(temp);
                    temp = 0;
                    if (i > j)
                        break;
                    flag = 0;
                }
            }
        }
        for (int i = 1; i < v.size(); i += 2)
        {
            A += v[i];
            C++;
        }
        for (int i = 2; i < v.size(); i += 2)
        {
            B += v[i];
            C++;
        }
        cout << C << " " << A << " " << B << endl;
    }
    return 0;
}