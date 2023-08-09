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
   ll n,count=0,flag=0,st=1,end=1;
   cin >> n;
   ll a[n+2];
   a[0]=0;
   a[n+1]=1000000000000000000;
   for(int i=1;i<=n;i++)
    cin >> a[i];
   for(int i=1;i<=n;i++){
       if(a[i]>a[i+1] && flag==0){
            count++;
            st=i;
            flag=1;
       }
       
       if(a[i]<a[i+1] && flag==1){
            //count++;
            end=i;
            flag=0;
       }
   }

   if(count>1){
    cout << "no" << endl;
   }
   else{
    if(count==1 && end==0){
        end=n;
    }
    if(a[st]<a[end+1] && a[end]>a[st-1]){
        cout << "yes" << endl;
        cout << max(st,(ll)1) << " " << max(end,(ll)1) << endl;
    }
    else
        cout << "no" << endl;
   }
   

return 0;
}