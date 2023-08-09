#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   ll t;
   cin >> t;
   while(t--){
        int n,a1=-1,a2=-1,a3=-1,b1=-1,b3=-1,b2=-1,flag1=1,flag2=1;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%2==0){
            if(a1==-1)
            a1=i;
            else if(a2==-1)
            a2=i;
            else if(a3==-1)
            a3=i;
        }
        if(a[i]%2!=0){
              if(b1==-1)
              b1=i;
              else if(b2==-1)
              b2=i;      
              else if(b3==-1)
              b3=i; 
        }
        }
        if(b1!=-1){
        if(b2!=-1 && b3!=-1)
        cout << "YES" << endl << b1+1 << " " << b2+1 << " " << b3+1 << endl;
        else if(a1!=-1 && a2!=-1)
        cout << "YES" << endl << b1+1 << " " << a2+1 << " " << a1+1 << endl;
        else
        cout << "NO" << endl;
        }
        else 
        cout << "NO" << endl;

   }
return 0;
}