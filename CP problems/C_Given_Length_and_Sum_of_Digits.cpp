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
   int n,m,flag=100000000;
   vector <int>vect;
   cin >> n >> m;
   if(m>9*n || m==0&&n!=1){
   cout << -1 << " " << -1 << endl;
   }
   else if(m==0 && n==1)
   cout << 0 << " " << 0 << endl;
   else{
    for(int i=0;i<n;i++){
        vect.push_back(0);
    }
    for(int i=0;i<n;i++){
        if(m>=9){
            vect[i]+=9;
            m-=9;
        }
        else{
            vect[i]+=m;
            break;
        }
    }
    int cnt=0;
    if(vect[n-1]==0){
    cout << 1;
    for(int i=n-2;i>=0;i--){
    if(vect[i]==m && m!=0)
    cout << vect[i]-1;
    else if(vect[i]==9 && cnt==0 && m==0){
    cout << vect[i]-1;cnt++;}
    else
    cout << vect[i];
    }
    cout << " ";
    for(int i=0;i<n;i++)
    cout << vect[i];
    
    }
    else{
    for(int i=n-1;i>=0;i--)
    cout << vect[i];
    cout << " ";
    for(int i=0;i<n;i++)
    cout << vect[i];
    }
    
   }
return 0;
}