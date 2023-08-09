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
        int n,m;
        cin >> n >> m;
        vector<int> vv;
        int a[n],b[n],c[n];
        map <int,vector<int>>imap;
        for(int i=0;i<n;i++){
        cin >> a[i];
        // vv.push_back(a[i]);
        c[i]=a[i];
        }
        for(int i=0;i<n;i++)
        cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++){
            imap[a[i]].push_back(b[i]);
        }
        //vv.pop_back();
        for(int i=0;i<n;i++){
            cout << imap[c[i]].back();
            imap[c[i]].pop_back();
            cout << " ";
        }
        cout << endl;

    }
return 0;
}
// #include <iostream>
// #include <vector>

// using namespace std;

// int main(void) {
//    vector<int> v = {1, 2, 3, 4, 5};

//    /* Remove last three elements */
//    v.pop_back();
//    v.pop_back();
//    v.pop_back();

//    for (int i = 0; i < v.size(); ++i)
//       cout << v[i] << endl;

//    return 0;
// }