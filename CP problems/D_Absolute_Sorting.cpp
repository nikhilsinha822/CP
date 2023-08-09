#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool compare_pair(const pair<ll,ll> &pair1, const pair<ll,ll> &pair2){
ll result = 1;
if( (pair2.second > pair1.second) || ((pair2.second == pair1.second) && (pair2.first > pair1.first)) ){
result = 0;
}
return result;
}
//unordered_map <ll,ll> imap;
//void seive(){
//    bool prime[N+1];
//    memset(prime,1,sizeof(prime));
//    for(ll i=2;i<=N;i++){
//        if(prime[i]){
//            imap[i*i]++;
//            for(ll j=i*i;j<=N;j+=i){
//                prime[j]=0;
//            }
//        }
//    }
//}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   ll t;
   cin >> t;
   while(t--){
      ll n,flg1=0,flg2=0,big=0;
      map <ll,ll>count;
      cin >> n;
      ll a[n];
      for(ll i=0;i<n;i++){
      cin >> a[i];
      count[a[i]]++;
      big=max(big,a[i]);
      }
    //   ll b[n];
    //   for(ll i=0;i<n;i++){
    //     b[i] = 1000000000-a[i];
    //   }
    //   int f1=0,f2=0;
    //   for(ll i=0;i<n-1;i++){
    //     if(b[i]<b[i+1])
    //         f2=1;
    //   }
    //   if(f2==0){
    //     cout << 1000000000 << '\n';
    //   }
      //else{
      for(ll i=0;i<n-1;i++){
        if(a[i]<a[i+1])
        flg1=1;
        if(a[i]>a[i+1])
        flg2=1;
      }
      if(flg2==0){
        cout << 0 << '\n';
      }
      else if(flg1==0){
        cout << a[0]+1 << '\n';
      }

      else{

        ll temp=abs(a[0]-a[1]),flg3=0,odd=0,even=0;
        for(ll i=0;i<n;i++){
            if((a[i])%2)
            odd++;
            else
            even++;
        }
        if(odd==n || even==n){
            int sum=0;
            if(count.size()==2){
                for(auto i: count)
                sum+=i.first;
                cout << sum/2 << endl;
            }
        }

    //     if(odd==n || even=n){
    //         ll avg=(a[0]+a[1])/2,fl3=0;
    //         for(ll i=0;i<n-1;i++){
    //             if((a[i]+a[i+1])/2==avg || )
    //             flg3=1;
    //         }
    //         if(flg3==0)
    //         cout << avg << endl;
    //     }
    //     else
    //     cout << -1 << '\n';
        // if(flg3==0)
        // cout << temp << '\n';
        
        else{
        ll b[n],f=0,bigger=0,smaller=1000000000;
        for(ll i=0;i<n;i++){
            bigger=max(a[i],bigger);
            smaller=min(a[i],smaller);
        }
        ll N = (bigger+smaller)/2+1;
        for(ll i=0;i<n;i++){
            b[i] = abs(N-a[i]);
        }
        //cout << N << endl;
        // for(ll i=0;i<n;i++){
        //     cout << b[i] << " ";
        // }
        for(ll i=0;i<n-1;i++){
            if(b[i]<=b[i+1])
            continue;
            else
            f=1;
        }
        if(f==0)
        cout << N << endl;
        else
        cout << -1 << '\n';
        }
      }
      //}
    //   else
    //   cout << -1 << '\n';
   }
return 0;
}