#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        char temp;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> temp;
            if(temp == 'Q')
            count++;
            else{
            count--;
            if(count<0){
                count=0;
            }}
        }
        if(count <= 0)
        cout << "Yes" << '\n';
        else
        cout << "No" << '\n';
    }
    return 0;
}