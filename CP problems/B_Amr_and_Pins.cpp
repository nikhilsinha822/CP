#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    double r,x1,y1,x2,y2,num=0,ans;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    num=sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));
    cout << (ll)ceil(num/(2*r)) << endl;
return 0;
}