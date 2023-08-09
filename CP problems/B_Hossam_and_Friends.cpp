#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int t;
   cin >> t;
   while(t--){
        int n,m;
        cin >> n >> m;
        int a[m],b[m];
        map <int,int>m;
        for(int i=0;i<m;i++){
        cin >> a[i] >> b[i];
        }

        // set<pair<int, int> > s;
        // for (int i=0; i<m; i++){
        //     s.insert(make_pair(min(a[i],b[i]), max(a[i],b[i])));
        // }
        // m=0;
        // int ans=n+(n-1)*n;
        // for(auto& str: s){
        // m+=str.second-str.first+1;
        // }
        // cout << ans-m << endl;
   }
return 0;
}