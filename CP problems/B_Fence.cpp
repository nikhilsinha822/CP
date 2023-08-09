#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int n,m;
   cin >> n >> m;
   int a[n+1];
   a[0]=0;
   for(int i=1;i<=n;i++)
        cin >> a[i];
   for(int i=1;i<=n;i++)
        a[i]+=a[i-1];
    int sum=a[m];
    for(int i=m+1;i<=n;i++)
       sum=min(a[i]-a[i-m],sum);
    for(int i=m;i<=n;i++){
        if(a[i]-a[i-m]==sum){
            cout << i-m+1 << endl;
            break;
        }
    }
return 0;
}