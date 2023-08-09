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
      ll n,count=0,zcount=0,flag=0,ans=0;
      cin>> n;
        string s;
        cin >> s;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
            zcount++;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='+')
            flag=1;
            if(flag==1 && s[i]=='0')
            count++;
            if(flag==1 && s[i]=='+'){
                count=0;
                flag=1;
            }
            if(flag==1 && s[i]=='-'){
                ans+=count%2;
                count=0;
                flag=0;
            }
        }
        count=0;
        flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='-')
            flag=1;
            if(flag==1 && s[i]=='0')
            count++;
            if(flag==1 && s[i]=='-'){
                count=0;
                flag=1;
            }
            if(flag==1 && s[i]=='+'){
                ans+=count%2;
                count=0;
                flag=0;
            }
        }
        if(zcount==n)
        cout << zcount << endl;
        else
        cout << ans << endl;
   }
return 0;
}