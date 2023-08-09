#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    double n;
    cin >> n;
    double st=0,end=2,mid;
    while(end*end+sqrt(end)<=n) end*=(double)2;
    while(end-st >1){
        mid=(st+end)/2;
        if(mid*mid+sqrt(mid)<n){
            st=mid;
        }
        else{
            end=mid;
        }
    }
    for(int i=0;i<100000;i++){
        mid=(st+end)/2;
        if(mid*mid+sqrt(mid)<n){
            st=mid;
        }
        else{
            end=mid;
        }
    }
    if(st*st+sqrt(st)==n)
    cout << st << endl;
    else
    cout << end << endl;
return 0;
}