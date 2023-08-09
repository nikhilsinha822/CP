#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pB pop_back()
#define mp make_pair
#define sc second
#define fr first
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    ll n,sum=0,count=0;
    cin >> n;
    ll a[n];
    multiset <int>used;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        if(sum+a[i]>=0){
            sum+=a[i];
            count++;
            if(a[i]<0) used.insert(a[i]); 
        } else {
            if(a[i]>*used.begin()){
                sum-=*used.begin();
                sum+=a[i];
                used.insert(a[i]);
                used.erase(used.begin());
            }
        }
    }
    cout << count << endl;
return 0;
}