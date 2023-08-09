#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,len=0,big=0,cnt=0,ad=0,flag=0,flg=0;
        char temp='/';
        cin >> n;
        map <char,int>m;
        string str;
        cin >> str;
        for(int i=1;i<n;i++){
            m[str[i]]++;
           if(str[i-1]==str[i]){
                len++;
                if(len+1>big){
                big=len+1;
                ad=i;
                temp=str[i];
                }
           }
           else{
                len=0;
           }
        }
        int nbig=big;
        char temp2='[';
        len=0;
        for(int i=ad+2;i<n;i++){
           if(str[i-1]==str[i]){
                len++;
                if(len+1==big){
                temp2=str[i];
                flg++;
                }
           }
           else{
                len=0;
           }
        }
        // for(int i=0;i<n-1;i++){
        //     if(str[i]==str[i+1]){
        //         cnt++;
        //         if(cnt==big-1)
        //         temp=str[i];
        //     }
        //     else{
        //         cnt=0;
        //         temp=str[0];
        //     }
        // 
        for(auto i:m)
        if(i.second>1)
        flag=1;
        if(temp==temp2)
        cout << nbig << endl;
        else{
        if(nbig-1<=0 && flag)
        cout << 1  << endl;
        else{
        if(flg>=2)
        cout << max(nbig-1,0)+1 << endl;
        else
        cout << max(nbig-1,0)  << endl;}
        }
        //cout << big <<temp << ad << endl;
    }
	// your code goes here
	return 0;
}
