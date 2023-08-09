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
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n + 1] = {0}, flag = 0, count = 0, st = 0, end = -1;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 3)
            {
                st = a[i - 1];
                for (int j = i; j <= n; j++)
                {
                    if (a[j] != 3)
                    {
                        end = a[j];
                        if (st == 0 || end == 0)
                        {
                            i = j;
                            //break;
                        }
                        else if (end == st && (j - i) % 2 == 0)
                        {
                            i = j;
                            a[j] = 0;
                            //break;
                        }
                        else if (end != st && (j - i) % 2 != 0)
                        {
                            //cout << st << " " << j;
                            i = j;
                            a[j] = 0;
                            //break;
                        }
                        else{
                            i=j;
                        }
                        break;
                    }
                    
                }
                end = -1;
            }
            if (a[i - 1] == a[i] && (a[i] == 1 || a[i] == 2))
            {
                a[i] = 0;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}