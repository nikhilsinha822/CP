#include<bits/stdc++.h>
#define ll long long
using namespace std;

double fac(double n){
    double f=1;
    for(double i=1;i<=n;i++)
    f*=i;
    return f;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(12); cout << fixed;
    string s1,s2;
    cin >> s1 >> s2;
    double p=0,n=0,q=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='+')
        p++;
        else
        n++;

    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='+')
        p--;
        else if(s2[i]=='-')
        n--;
        else
        q++;
    }
    if(p<0 || n<0){
        cout << (double) 0 << endl;
    }
    else if(p==0 && n==0){
        cout << (double) 1 << endl;
    }
    else {
        cout << fac(q)/(fac(p)*fac(q-p))/pow(2,q);
    }

return 0;
}