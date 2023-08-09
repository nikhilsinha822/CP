#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n,m,num=0,flag=0;
        cin >> n >> m;
        ll a[n];
        for(int i=0;i<n;i++){
        cin >> a[i];
        num|=a[i];
        }
        ll num2=num;
        num^=m;
        if((num|num2)==m)
        cout << num << endl;
        else
        cout << -1 << endl;
    }
	// your code goes here
	return 0;
}
