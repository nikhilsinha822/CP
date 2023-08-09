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
        int n, m, d,small=1000000000,ans;
        int s1=small,big=0;
        cin >> n >> m >> d;
        int a[n+1], b[m+1],c[n+1];
        map <int ,int>imap;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            imap[a[i]]=i;
        }
        for (int i = 1; i <= m; i++){
            cin >> b[i];
            c[i]=imap[b[i]];
            s1=min(s1,imap[b[i]]);
            big=max(big,imap[b[i]]);
        }
        //sort(c+1,c+n+1);
        for(int i=1;i<m;i++){
            small=min(c[i+1]-c[i],small);
        }
        ans=small;
        if(ans<0)
        cout << 0 << endl;
        else if(d+2 <= n)
        cout << min(n-big+s1-1,ans) << endl;
        else
        cout << ans << endl;    

    }
    return 0;
}