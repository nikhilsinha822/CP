#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n,k,l,count=0,ans=0,tc=0;
        cin >> n >> k >> l;
        pair<long long,long long>a[n];
        for(int i=0;i<n;i++){
            long long t1,t2;
            cin >> t1 >> t2;
            if(t2==l){
                count++;
            }
            a[i].first = t1;
            a[i].second = t2;
        }
        sort(a,a+n);
        for(int i=n-1;i>=0;i--){
            if(a[i].second==l && tc<k){
                tc++;
                ans+=a[i].first;
            }
        }
        if(count>=k)
        cout << ans << endl;
        else
        cout << -1 << endl;
        
    }
	// your code goes here
	return 0;
}
