#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(10); cout << fixed;
    double temp,d;
    int n;
    cin >> n >> d;
    double a[n];
    for(int i=0;i<n;i++)
    cin >> a[i];
    sort(a,a+n);
    temp=0;
    for(int i=0;i<n-1;i++)
        temp= max(a[i+1]-a[i],temp);
    temp/=2;
    cout << max(a[0],max(d-a[n-1],temp)) << endl;
return 0;
}