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
        ll n, a = 1, b = 1, c = 1;
        cin >> n;
        ll temp=n;
        for (int i = 2; i < 1000000; i++)
        {

            if (n % i == 0)
            {
                if (a==1)
                {     
                    a=i;
                    n/=i;
                }
                else
                {
                    b=i; 
                    break;
                }
                
            }
        }
        if(temp/(a*b)>b && temp%(a*b)==0 && b!=1 && a!=1){
            cout << "YES" << '\n' << a << " " << b << " " << temp/(a*b) << "\n";
        }
        else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}