#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool compare_pair(const pair<int, int> &pair1, const pair<int, int> &pair2)
{
    int result = 1;
    if ((pair2.second > pair1.second) || ((pair2.second == pair1.second) && (pair2.first > pair1.first)))
    {
        result = 0;
    }
    return result;
}
// unordered_map <ll,ll> imap;
// void seive(){
//     bool prime[N+1];
//     memset(prime,1,sizeof(prime));
//     for(ll i=2;i<=N;i++){
//         if(prime[i]){
//             imap[i*i]++;
//             for(ll j=i*i;j<=N;j+=i){
//                 prime[j]=0;
//             }
//         }
//     }
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(15);
    cout << fixed;
    ll n,count=0,temp=0,ans=0;
    cin >> n;
    ll a[n + 1];
    a[0]=0;
    for (int i = 1; i  <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    ll i=1,j=2;
    while(j<n){
        //cout << a[j] << " " << a[i] << endl;
        if(a[j]-a[i]==a[i] && a[n]-a[j]==a[j]-a[i]){
            count++;
            j++;
            //i=j-1;
        }
        else{   
            count=0;  
            if(i+1==j) j++;
            else i++;
        }  
    }
    //ans+=temp;
    cout << temp << endl;
    return 0;
}