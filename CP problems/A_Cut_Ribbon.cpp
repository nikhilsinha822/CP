#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int n,a[3],ans=0,z=0;
   cin >> n >> a[0] >> a[1] >> a[2];
   sort(a,a+3);
   for(int i=0;i<4001;i++){
    for(int j=0;j<4001;j++){
        if(n-a[0]*i-a[1]*j<0)
        continue;
        //cout << z << ' ';
        if((n-a[0]*i-a[1]*j)%a[2]==0)
        ans=max(ans,i+j+(n-a[0]*i-a[1]*j)/a[2]);
    }
   }
   cout << ans << endl;
return 0;
}