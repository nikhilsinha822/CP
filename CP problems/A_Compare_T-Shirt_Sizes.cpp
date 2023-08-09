#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--){
 string str1,str2;
 cin >> str1;
 cin >> str2;
 if(str1[str1.length()-1]>str2[str2.length()-1]) 
 cout << "<" << endl;
 else if(str1[str1.length()-1]<str2[str2.length()-1]) 
 cout << ">" << endl;
 else{
    if(str1[str1.length()-1]=='S'){
    if(str1.length()-1>str2.length()-1)
    cout << "<" << endl;
    else if(str1.length()-1<str2.length()-1)
    cout << ">" << endl;
    else
    cout << "=" << endl;}
    else{
    if(str1.length()-1>str2.length()-1)
    cout << ">" << endl;
    else if(str1.length()-1<str2.length()-1)
    cout << "<" << endl;
    else
    cout << "=" << endl;}
 }
}
return 0;
}