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
   ll t;
   cin >> t;
   while(t--){
    int a[2][2],big=0,sm=1000000;
    int n=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            big=max(big,a[i][j]);
            sm=min(sm,a[i][j]);
        }
    }
    int i1,j1,i2,j2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==big)
                i1=i,j1=j;
            if(a[i][j]==sm)
                i2=i,j2=j;
        }
    }
    if((i1==j1 && i2==j2) || (i1==j2 && i2==j1))
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    //   int a[5]={0},big=0,sm=1000000,i1,i2;
    //   for(int i=1;i<5;i++){
    //   cin >> a[i];
    //     big=max(big,a[i]);
    //     sm=min(sm,a[i]);
    //   }
    //   for(int i=1;i<5;i++){
    //     if(a[i]==big)
    //         i1=i;
    //     if(a[i]==sm)
    //         i2=i;
    //   }
    //   if(abs(i2-i1==1) || abs(i2-i1==3))
    //   cout << "YES" << endl;
    //   else
    //   cout << "NO" << endl;
   }
return 0;
}