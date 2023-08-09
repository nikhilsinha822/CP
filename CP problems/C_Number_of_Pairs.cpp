#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, l, r, count = 0;
        cin >> n >> l >> r;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long i = 0, j = n - 1;
        while (i < j)
        {
            while (i < j && a[i] + a[j] < l)
            {
                i++;
            }
            int st = i + 1, end = j - 1, mid;
            if (a[i]+a[j]<=r)
            {
                while (end - st > 1)
                {
                    mid = (st + end) / 2;
                    if (a[mid] + a[j] <= r)
                    {
                        st = mid;
                    }
                    else
                    {
                        end = mid;
                    }
                }
                if (a[end] + a[j] <= r)
                    count += end - i + 1;
                else if (a[st] + a[j] <= r)
                {
                    count += st - i + 1;
                }
            }
            j--;
        }
        cout << count << endl;
    }
    return 0;
}