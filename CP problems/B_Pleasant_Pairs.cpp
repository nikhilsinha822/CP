#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll t;
    cin >> t;
    while(t--){
        vector <pair<ll,ll>>v;
        int n,count=0;
        cin >> n;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            v.push_back(make_pair(temp,i));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i].first*v[j].first>2*1e5)
                break;
                else if(v[i].second+v[j].second+2==v[i].first*v[j].first)
                count++;
            }
        }
        cout << count << endl;
    }
return 0;
}