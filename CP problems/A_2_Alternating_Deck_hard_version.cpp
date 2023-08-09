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
      int n;
      cin >> n;
      int aw=0,ab=0,bb=0,bw=0,count=0,temp=0,w=0,b=0;
      aw=1;
      n-=1;
      int i=2;
      while(n){
        if(2*i+1<=n){
            temp=2*i+1;
            b=ceil((float)temp/2);
            w=temp/2;
            n-=2*i+1;
            i+=2;
        }
        // else if(i<=n){
        //     temp=i;
        //     n-=i;
        //     i++;
        // }
        else{
            temp=n;
            b=ceil((float)temp/2);
            w=temp/2;
            n=0;
            i++;
        }
        if(count%2==0){
            bb+=b;
            bw+=w;
        }
        else{
            //cout << endl << "||" << b << " " << w << "||";
            ab+=w;
            aw+=b;
        }
        count++;
      }
      cout << aw << ' ' << ab << ' ' << bw << ' ' << bb << endl;
   }
return 0;
}