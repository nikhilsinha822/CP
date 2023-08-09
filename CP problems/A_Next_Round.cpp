#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    int n,m,cnt=0,flag=0;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++)
    cin >> a[i];
    for(int i=0;i<n;i++)
    if(a[i]>0)
    flag=1;
    else
    flag=0;
    for(int i=0;i<n;i++)
    if(a[i]<=m)
    cnt++;
    if(n-cnt)
    cout << n-cnt;
    else if (flag)
    {
        cout << n;
    }
    else
       cout << 0;
return 0;
}