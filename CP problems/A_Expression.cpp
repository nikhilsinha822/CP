#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int a[3],cnt=0;
   for(int i=0;i<3;i++){
   cin >> a[i];
   if(a[i]==1)
   cnt++;
   }
   if(cnt==3)
   cout << 3 << endl;
   else if(cnt==2){
    if(a[0]==1 && a[1]==1)
    cout << 2*a[2] << endl;
    else if(a[1]==1 && a[2]==1)
    cout << 2*a[0] << endl;
    else
    cout << a[0]+a[1]+a[2] << endl;
   }
   else if(cnt==1){
    if(a[1]==1){
        sort(a,a+3);
        cout << (a[0]+a[1])*a[2] <<endl;
    }
    else if(a[0]==1){
        cout << (a[0]+a[1])*a[2] << endl;
    }
    else{
        cout << a[0]*(a[1]+a[2]) << endl;
    }
    }
   else 
   cout << a[0]*a[1]*a[2] << endl;
return 0;
}