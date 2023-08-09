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
//    t=1;
   while(t--){
      int n,m;
      map <int,int>imap;
      cin >> n >> m;
      int a[n];
      for(int i=0;i<n;i++){
        cin >> a[i];
        imap[a[i]]++;
      }
      int temp=m-1,i=0,j=n-1,a1=0,a2=0,mark1,mark2;
        while(temp){
            if(a[i]==1 && a1==0){
                mark1=1;
                while(i<n){
                    if(a[i]==1){
                    a1++;i++;}
                    else
                    break;
                }
            }
            else if(a[j]==1 && a2==0){
                mark2=1;
                while(j>=0){
                    if(a[j]==1){
                    a2++;j--;}
                    else
                    break;
                }
            }
            else if(a[i]==0 && a1==0){
                mark1=0;
                while(i<n){
                    if(a[i]==0){
                    a1++;i++;}
                    else
                    break;
                }
            }
            else if(a[j]==0 && a2==0){
                mark2=0;
                while(j>=0){
                    if(a[j]==0){
                    a2++;j++;}
                    else
                    break;
                } 
            }
            if(a1>=a2){
                imap[mark1]-=a1;
                a1=0;
                temp--;
            }
            else{
                imap[mark2]-=a2;
                a2=0;
                temp--;
            }
        }
    //   while(temp && i<n){
    //     while(1 && i<n){
    //     if(a[i]==1){
    //         imap[1]--;
    //         i++;
    //     }
    //     else{
    //         temp--;
    //         break;
    //     }
    //     }
    //     while(1 && i<n){
    //     if(a[i]==0){
    //         imap[0]--;
    //         i++;
    //     }
    //     else{
    //         temp--;
    //         break;
    //     }
    //     }
    //   }
        cout << imap[1] * imap[0] << endl;
   }
return 0;
}