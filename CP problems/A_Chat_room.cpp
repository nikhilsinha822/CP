#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   string str;
   int i1=0,i2=0,i3=0,i4=0,i5=0,flag=0;
   map <char,int>m;
   cin >> str;
   for(int i=0;i<str.length();i++){
      m[str[i]]++;
   }
    if(m['h']>0 && m['e']>0 && m['l']>1 && m['o']>0){
        int i=0,j=0;
        for(;i<str.length();i++)
           if(str[i]=='h'){
            i1=i;break;
            }
        if(i<str.length())
        for(;i<str.length();i++)
           if(str[i]=='e'){
            i2=i;break;
            }
        if(i<str.length())
        for(;i<str.length();i++) {  
           if(str[i]=='l'){
            i3=i;
            j=i+1;
            for(;j<str.length();j++)
                if(str[j]=='l'){
                i4=j;flag=1;break;
                }
            
            }
            if(flag)
            break;
            else
            i4=0;
        }
        i=j+1;
        if(i<str.length())
        for(;i<str.length();i++)
           if(str[i]=='o'){
            i5=i; break;
            }

        if(i5>i4 && i4>i3 && i3>i2 && i2>i1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    cout << "NO" << endl;
    
return 0;
}