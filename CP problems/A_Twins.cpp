#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    int n,sum1=0,sum2=0;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
    cin >> a[i];
    b[i]=a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        sum1+=a[i];
    }
    for(int i=0;i<n;i++){
        sum2+=a[i];
        sum1-=a[i];
        if(sum2>sum1){
        cout << i+1 << '\n';
        break;
        }
    }
return 0;
}