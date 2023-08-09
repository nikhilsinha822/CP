#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define sc second
#define fr first
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    string num;
    ll flag=0;
    cin >> num;
    ll n=num.size(),last=num[n-1]-'0',index;
    for(int i=n-1;i>=0;i--){
        if((num[i]-'0')%2==0){
            if(flag==0)
            index=i;
            else{
                if(last>num[i]-'0'){
                    index=i;
                }
            }
            flag=1;
        }
    }
    if(!flag){
        cout << -1 << endl;
    }
    else{
        swap(num[index],num[n-1]);
        cout << num << endl;
    }
    
return 0;
}