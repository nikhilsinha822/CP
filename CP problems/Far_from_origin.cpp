#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int d1=pow((pow(x1,2)+pow(y1,2)),0.5);
        int d2=pow((pow(x2,2)+pow(y2,2)),0.5);
        if(d1==d2)
        cout << "EQUAL" << endl;
        else if(d1>d2)
        cout << "ALEX" << endl;
        else
        cout << "BOB" << endl;
    }
	// your code goes here
	return 0;
}
