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
    ll n, m, flag = 0;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != '-')
            {
                if (flag == 0)
                    a[i][j] = 'B';
                else
                    a[i][j] = 'W';
            }

            if (flag)
                flag = 0;
            else
                flag = 1;
        }
        if(m%2==0){
        if (flag)
            flag = 0;
        else
            flag = 1;}
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}