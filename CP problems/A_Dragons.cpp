#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    int p,n,x,y,flag=0;
    cin >> p >> n;
    vector <pair <int,int>>vect;
    for(int i=0;i<n;i++){
    cin >> x >> y;
    vect.push_back(make_pair(x,y));
    }
    sort(vect.begin(),vect.end());
    for(int i=0;i<n;i++){
        if(p>vect[i].first)
        p+=vect[i].second;
        else {
        flag=1;break;}
    }
    if(flag==1)
    cout << "NO" << endl;
    else
    cout << "YES" << endl;
return 0;
}