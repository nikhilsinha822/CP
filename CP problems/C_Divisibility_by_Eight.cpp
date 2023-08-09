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
    string str;
    cin >> str;
    int n = str.size(), flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (flag)
            break;
        if (abs('0' - str[i]) % 8 == 0)
        {
            cout << "YES\n"
                 << str[i] << endl;
            flag = 1;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (flag)
                break;
            if ((abs('0' - str[j]) + 10 * abs('0' - str[i])) % 8 == 0)
            {
                cout << "YES" << '\n'
                     << str[i] << str[j] << '\n';
                flag = 1;
            }
            for (int k = j + 1; k < n; k++)
            {
                if (flag)
                    break;
                if ((abs('0' - str[k]) + 10 * abs('0' - str[j]) + 100 * abs('0' - str[i])) % 8 == 0)
                {
                    cout << "YES" << '\n'
                         << str[i] << str[j] << str[k] << '\n';
                    flag = 1;
                }
            }
        }
    }
    if (!flag)
        cout << "NO" << endl;

    return 0;
}