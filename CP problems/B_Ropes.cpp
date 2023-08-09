#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    long long n,m,count=0;
    cin >> n >> m;
    long long a[n];
    for(int i=0;i<n;i++)
    cin >> a[i];
    sort(a,a+n);
    double end=1e9,st=0,mid;
    for(int i=0;i<100;i++){
        mid=(st+end)/2;
        count=0;
        for(int i=0;i<n;i++){
            count+=a[i]/mid;
        }
        if(count<m){
            end=mid;
        }
        else{
            st=mid;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
            count+=a[i]/end;
    }
    if(count>=n)
    cout << mid << endl;
    else
    cout << st << endl;
return 0;
}