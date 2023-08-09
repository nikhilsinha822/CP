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
        ll n, flag = 0;
        cin >> n;
        string str, str1, str2;
        cin >> str;
        str1 = "1", str2 = "1";
        for (int i = 1; i < n; i++)
        {
            if (str[i] == '1')
            {
                if (flag)
                {
                    str1.push_back('1');
                    str2.push_back('0');
                }
                else
                {
                    str1.push_back('0');
                    str2.push_back('1');
                    flag=1;
                }
            }
            if (str[i] == '2')
            {
                if (flag)
                {
                    str1.push_back('2');
                    str2.push_back('0');
                }
                else
                {
                    str1.push_back('1');
                    str2.push_back('1');
                    //flag=1;
                }
            }
            if (str[i] == '0')
            {
                str1.push_back('0');
                str2.push_back('0');
            }
        }
        cout << str2 << "\n"
             << str1 << "\n";
    }
    return 0;
}