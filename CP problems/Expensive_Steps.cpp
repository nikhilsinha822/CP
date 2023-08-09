#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    float n,x1,y1,x2,y2;
    cin >>n >> x1 >> y1 >> x2 >> y2;
    int a1,a2;
    if(x1>=n/2 && y1>=n/2)
    a1 = min(n-x1,n-y1);
    else if(x1>=n/2 && y1<=n/2)
    a1 = min(n-x1,y1);
    else if(x1<=n/2 && y1>=n/2)
    a1 = min(x1,n-y1);
    else if(x1<=n/2 && y1<=n/2)
    a1 = min(x1,y1);
    
    
    if(x2>=n/2 && y2>=n/2)
    a2 = min(n-x2,n-y2);
    else if(x2>=n/2 && y2<=n/2)
    a2 = min(n-x2,y2);
    else if(x2<=n/2 && y2>=n/2)
    a2 = min(x2,n-y2);
    else if(x2<=n/2 && y2<=n/2)
    a2 = min(x2,y2);
    
    cout << min(a1+a2+1,(int)(y2-y1+x2-x1)) << endl;
    }
	// your code goes here
	return 0;
}
