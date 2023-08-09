#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
 int l,r,x,temp;
 cin >> l >> r >> x;
 int a,b;
 cin >> a >> b;
 if(a>b)
 swap(a,b);
    if(a==b)
        cout << 0 << '\n';
    else if(b-a>=x)
        cout << 1 << '\n';
    else if(r-b>=x || a-l>=x)
        cout << 2 << '\n';
    else if(r-a>=x && b-l>=x)
        cout << 3 << '\n';
    else 
        cout << -1 << '\n';        
}
return 0;
}