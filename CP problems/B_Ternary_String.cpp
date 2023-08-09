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
        string str;
        ll f1 = 0, f2 = 0, f3 = 0, ans = INT64_MAX;
        cin >> str;
        for (ll i = 0, j = 1, k = 2; k < str.size(); k++)
        {
            if (str[k] == str[j] && str[k] == str[i])
            {
                i = k;
                j = k + 1;
                k++;
            }
            else if (str[i] == str[j])
            {
                i = j;
                j = k;
            }
            else if (str[k] == str[j])
            {
                j = k;
            }
            else if (str[k] == str[i])
            {
                i = k;
            }
            else
            {
                if (str[i] != str[j] && str[j] != str[k] && str[i] != str[k])
                {
                    ans = min(k - min(i, j) + 1, ans);
                    f1 = 1;
                    if(i>j){
                    j=i;
                    i=k;}
                    else{
                    i = j;
                    j = k;}
                }
            }
        }
        if (f1)
            cout << ans << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}