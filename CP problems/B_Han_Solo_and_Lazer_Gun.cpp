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
    double n,x,y;
    set <double>s;
    cin >> n >> x >> y;
    while(n--){
        double x0,y0;
        cin >> x0 >> y0;
        if(x0-x==0) s.insert(1e9);
        else s.insert((y0-y)/(x0-x));
    }
    cout << (ll)s.size() << endl;
return 0;
}