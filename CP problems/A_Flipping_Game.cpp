#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool compare_pair(const pair<int,int> &pair1, const pair<int,int> &pair2){
int result = 1;
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
   ll n,count=0;
   //ll zm=0,om=0,ans=0,one=0,zero=0,count=0;
   cin >> n;
   ll a[n+1],sum,one=0;
   sum=0;
   for(int i=1;i<=n;i++){
   cin >> a[i];
  
   }
   for(int i=1;i<=n;i++){
        if(a[i]==1){
        a[i]=-1;
        one++;}
        else
        a[i]=1;
        //cout << a[i] << " ";
   }
   for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            count+=a[j];
            sum=max(sum,count);
        }
        count=0;
   }
   if(n==one)
   cout << one-1;
   else
   cout << sum+one;
    // for(int i=n;i>0;i--){
    //     if(a[i][0])
    //     count++;
    //     else
    //     count=0;
    //     a[i][1]=count;
    // }
    // count=0;
    // for(int i=1;i<=n;i++){
    //     if(!a[i][0])
    //     count++;
    //     else
    //     count=0;
    //     a[i][2]=count;
    // }
    // for(int i=1;i<=n;i++){
    //     if(a[i][2]-a[i][1]>0)
    //     ans=a[i][2]-a[i][1];
    // }
    // for(int j=0;j<3;j++){
    //     for(int i=1;i<=n;i++)
    //     cout << a[i][j] << " ";
    //     cout << '\n';
    // }
//    if(a[i])
//    count++;
//    }
//    for(int i=0;i<n;i++){
//     if(a[i]==0)
//      zero++;
//     else{
//       one++;
//       if(zero-one<0){
//         zero=0,one=0;
//       }
//     }
//     if(max(zm,zero)-max(om,one)>zm-om){
//     om=max(om,one);
//     zm=max(zm,zero);}
//    }
//     if(count==n)
//     cout<<count-1<<endl;
//     else
//    cout << max(count-om+zm,count) << endl;
return 0;
}