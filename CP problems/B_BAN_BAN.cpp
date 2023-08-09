#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
      int n,st=2,end,steps;
      cin >> n;
      end=3*n;
      if(n==1){
        steps=(n+1)/2;
        cout << steps << endl;
        cout << 1 << " " << 2 << endl;}
      else{
        if(n%2==0){
            steps=n/2;
            cout << steps << endl;
            for(int i=0;i<steps;i++){
            cout << st << " " << end << endl;
            st+=3;
            end-=3;
        }
        }
        else{
            steps=(n+1)/2;
            cout << steps << endl;
            for(int i=0;i<steps;i++){
            cout << st << " " << end << endl;
            st+=3;
            end-=3;
            }
            // cout << (n-n/2)+2 << " " << (n-n/2)+3 << endl;
        }
      }
}
return 0;
}