#include <bits/stdc++.h>
#define ll long long
using namespace std;
// ll max_pair(ll st, ll end){

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
        ll n, count = 0, ans = 0, sum;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            for (int end = 0; end < n; end++)
            {
                sum = a[i] + a[n - 1 - end];
                for (int j = i, k = n - 1 - end; j < k;)
                {
                    if (a[j] + a[k] == sum)
                    {
                        count++;
                        j++;
                        k--;
                    }
                    else
                    {
                        if (a[j] + a[k] > sum)
                            k--;
                        else
                            j++;
                    }
                }
                ans = max(ans, count);
                count = 0;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     sum = a[0] + a[n - 1 - i];
        //     for (int j = 0, k = n - 1 - i; j < k;)
        //     {
        //         if (a[j] + a[k] == sum)
        //         {
        //             count++;
        //             j++;
        //             k--;
        //         }
        //         else
        //         {
        //             if (a[j] + a[k] > sum)
        //                 k--;
        //             else
        //                 j++;
        //         }
        //     }
        //     ans = max(ans, count);
        //     count = 0;
        // }
        cout << ans << endl;
    }
    return 0;
}