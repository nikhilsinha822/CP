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
   int x1,y1,x2,y2,x3,y3,x4,y4,flag=0;
   cin >> x1 >> y1 >> x2 >> y2;
   if(x1==x2){
    x3=abs(y2-y1)+x1;
    x4=x3;
    y3=y1;
    y4=y2;
   }
   else if(y1==y2){
    y3=abs(x2-x1)+y1;
    y4=y3;
    x3=x1;
    x4=x2;
   }
   else if(abs(x2-x1) == abs(y2-y1)){
    y3=y2;
    y4=y1;
    x3=x1;
    x4=x2;
   }
   else{
    flag=1;
   }
   if(flag)
   cout << -1;
   else
   cout << x3 << " " << y3 << " " << x4 << " " << y4;
return 0;
}