#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    string str;
    int flag=0,cnt=0;
    cin >> str;
    
    if(str[0]<'a')
    flag=1;
    for(int i=1;i<str.length();i++){
        if(str[i]<'a')
        continue;
        else
        flag=1;
    }
    for(int i=0;i<str.length();i++){
        if(str[i]<='Z')
        cnt++;
    }

    if(flag==0 || cnt==str.length()){
        if(str[0]>='a')
        str[0]=str[0]-'a'+'A';
        if(cnt==str.length())
        str[0]=str[0]+'a'-'A';
        for(int i=1;i<str.length();i++){
            if(str[i]<'a')
            str[i]=str[i]+'a'-'A';
        }
    }
    cout << str;
return 0;
}