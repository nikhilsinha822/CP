#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    int n,m;
    cin >> n >> m;
    int a[m];
    for(int i=0;i<m;i++)
    cin >> a[i];
    sort(a,a+m);
    int small=a[m-1]-a[0];
    
    for(int i=0;i<=m-n;i++){
        small = min(small,a[i+n-1]-a[i]);
    }
    cout << small << endl;
return 0;
}