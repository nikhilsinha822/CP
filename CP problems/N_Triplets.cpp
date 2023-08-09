#include <bits/stdc++.h>
using namespace std;

    

const int N=100000;
int main() {
    bool prime[N];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= N; p++) {
        if (prime[p] == true) {
           for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n,f1;
        cin >> n;
        for(int i=2;i<sqrt(n);i++){
            if(n%i==0 && n/i!=i){
                f1=i;
                break;
            }
        }
        if(n/f1!=1)
        cout << 1 << " " << f1 << " " << n/f1 << endl;
        else
        cout << -1 << endl;
    }
	// your code goes here
	return 0;
}
