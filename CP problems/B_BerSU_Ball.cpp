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
    int n,m;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    cin >> m;
    int b[m];
    for(int i=0;i<m;i++)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0,cnt=0,temp;
    while(i<n && j<m){
        if(a[i]==b[j] || abs(a[i]-b[j])==1){
            cnt++;
            i++;j++;
            temp=j;
        }
        else
        j++;  
        if(j==m){
            i++;
            j=temp;
        } 
    }
    cout << cnt;
return 0;
}