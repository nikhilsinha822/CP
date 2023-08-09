#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool compare_pair1(const pair<ll,ll> &pair1, const pair<ll,ll> &pair2){
    ll result = 0;
    if( (pair2.second > pair1.second) || ((pair2.second == pair1.second) && (pair2.first > pair1.first)) ){
    result = 1;
    }
    return result;
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
        int n,cnt=0,tcnt=0;
        cin >> n;
        string str;
        cin >> str;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1')
            cnt++;
        }
        if(cnt==0 || cnt==str.size())
        cout << -1 << endl;
        else{
        pair <int,char>p[str.size()];
        for(int i=0;i<str.size();i++){
            p[i] = make_pair(i+1,str[i]);
        }
        sort(p,p+str.size(),&compare_pair1);
        int arr[n];
        for(int i=0;i<n;i++)
        arr[i]=p[i].first;
        sort(arr,arr+n);
        // for(int i=0;i<str.size();i++){
        //     if(cnt>n && str[i]=='1')
        //     cout << i+1 << " ";
        //     else if(str[i]=='0')
        //     cout << i+1 << " ";
        //     tcnt++;
        //     if(tcnt==n+1)
        //     break;
        // }
        for(int i=0;i<n;i++)
        cout << arr[i] << ' ';
        cout << endl;
        }
   }
return 0;
}