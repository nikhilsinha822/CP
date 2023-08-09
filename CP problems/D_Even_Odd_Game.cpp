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
        long long n,flag=0,al=0,bb=0;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=n-1;i>=0;i--){
            if(a[i]%2==1 && flag){
                bb+=a[i];
            }
            else if(a[i]%2==0 && !flag){
                al+=a[i];
            }
            flag=!flag;
        }
        if(al>bb)
        cout << "Alice" << endl;
        else if(al<bb)
        cout << "Bob" << endl;
        else
        cout << "Tie" << endl;
    }
return 0;
}