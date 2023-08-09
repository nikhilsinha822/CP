#include<bits/stdc++.h>
using namespace std;
int sortPair(pair1<int,int>,pair2<int,int>){
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair <int,int>pr;
        for(int i=0;i<n;i++){
            int x,y;
            cin >> x >> y;
            if(x>=y){
                pr.first=x;
                pr.second=y;
            }
            else{
                pr.first=y;
                pr.second=x;
            }
            sort(pr,pr+n);
        }
    }
}