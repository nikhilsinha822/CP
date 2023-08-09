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
      ll n,m,count1=0,count2=0,neg=0,pos=0;
      cin >> n>> m;
      string str1,str2;
      cin >> str1 >> str2;
        map <char,int>imap1,imap2,imap3;
        for(int i=0;i<n;i++){
            imap1[str1[i]]++;
            imap3[str1[i]]++;
        }
        for(int i=0;i<m;i++){
            imap2[str2[i]]++;
            imap3[str2[i]]++;
        }
        
        for(auto i:imap3){
            if(i.second%2!=0){
                count1++;
            }
            if(abs(imap1[i.first]-imap2[i.first])%2!=0)
            count2++;
            if(imap1[i.first]>imap2[i.first])
            pos++;
            if(imap2[i.first]>imap1[i.first])
            neg++;
            // if((imap1[i.first]%2==0 && imap2[i.first]!=0) && (imap2[i.first]%2==0 && imap1[i.first]!=0) && (imap2[i.first]!=imap1[i.first])){
            //     count2++;
            // }
         }
        if(count2<=1 && (pos==0 || neg==0)){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
   }
return 0;
}