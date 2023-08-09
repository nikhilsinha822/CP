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

    ll w, h, n;
    cin >> w >> h >> n;
    ll st = 1, end = max(min(w,h)*n,max(w,h)), mid;
    while (end - st > 1)
    {
        mid = (st + end) / 2;
        if ((mid / h) * (mid / w) < n)
        {
            st = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    if ((st / h) * (st / w) >= n)
        cout << st << endl;
    else
        cout << end << endl;
    return 0;
}