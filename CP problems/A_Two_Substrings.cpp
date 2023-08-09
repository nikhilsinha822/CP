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
    string str;
    int f1=0,f2=0,aba=0,bab=0;
    cin >> str;
    for(int i=0;i<str.size();i++){
        if(i+2<str.size() && str[i]=='A' && str[i+1]=='B' && str[i+2]=='A'){
            aba++;
            i+=2;
        }
        else if(i+2<str.size() && str[i]=='B' && str[i+1]=='A' && str[i+2]=='B'){
            bab++;
            i+=2;
        }
        else if(i+1<str.size() && str[i]=='A' && str[i+1]=='B' && f1!=1){
            f1=1;
            i++;
            continue;
        }
        else if(i+1<str.size() && str[i]=='B' && str[i+1]=='A' && f2!=1){
            f2=1;
            i++;
            continue;
        }
    }
    if((f1 && f2) || ((aba||bab) && f1) || ((aba||bab) && f2) || aba&&bab)
    cout << "YES" << endl;
    else
    cout << "NO" <<endl;
return 0;
}