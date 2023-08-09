#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    int n,co=0,ce=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%2)
        co++;
        else
        ce++;}
    if(co>ce)
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
        cout << i+1;
    }
    else
    for(int i=0;i<n;i++){
        if(a[i]%2)
        cout << i+1;
    }
return 0;
}