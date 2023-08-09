#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   ll t;
   cin >> t;
   while(t--){
        ll N=1000000007;
        ll n;
        cin >> n;
        ll a1,a2,a3;
        ll a=n%N,b=(n-1)%N,c=(2*n-1)%N,d=(n+1)%N,e=(2*n+1)%N;
        ll r1=(( (a * b)%N * c)%N);
        ll r2=(( b * a)%N );
        ll r3=((((a * d)%N) * e)%N);
        a1= (r1%N*337%N)%N;
        a2=(r2%N*1011%N)%N;
        a3=(r3%N*337%N)%N;
        //   i=1;
        //   while(i<n-1){
        //     ans2+=i*(i+1);
        //     i++;
        //   }
        cout << (((a1%N+a2%N+a3%N)%N))%N << endl;
   }
return 0;
}