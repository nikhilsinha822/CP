#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   int n,flag=0;
   cin >> n;
   int temp=n;
   while(temp){
    if(temp%10==7 || temp%10==4){   
        temp/=10;
    }
    else{
        flag=1;
        break;
    }
   }
   if((n%4==0) || (n%7==0) || n%47==0 || n%77==0 || n%447==0 || n%477==0 || n%777==0 || flag==0)
   cout << "YES" << endl;
   else 
   cout << "NO" << endl;
return 0;
}