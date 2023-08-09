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
      ll n,ans=0;
      char temp;
      cin >> n >> temp;
      string du;
      cin >> du;
      string str = du+du;
      n=2*n;
      ll i=0,j=0;
      if(temp=='g')
      cout << 0 << endl;
      else{
      while(i<n && j<n){
        while(str[i]!=temp && i<n)
            i++;
        j=i+1;
        while(str[j]!='g' && j<n)
            j++;
        ans=max(ans,j-i);
        i=j+1;
        j++;
      }
       
    //   int first,second,flg;
    //   for(int k=n-1;k>=0;k--){
    //   if(str[k]==temp)
    //     first=k;
    //   if(str[k]=='g')
    //     break;
    //   }
    //   for(int k=0;k<n;k++){
    //   if(str[k]=='g'){
    //     second=k;
    //     break;
    //   }
    //   }
    //   for(int k=n-1;k>=0;k--){
    //     if(str[k]=='g'){
    //     flg=0;
    //     break;
    //     }
    //     else if(str[k]==temp){
    //     flg=1;
    //     break;
    //     }
    //   }
      
    //   if(first>second && flg)
    //     ans = max(ans,n-1-first+second+1);
      cout << ans << endl;
      }
   }
return 0;
}