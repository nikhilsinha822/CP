#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
ll s[1001]={0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(15); cout << fixed;
    for(int i=2;i<1001;i++){
        if(s[i]==0)
        for(int j=i*i;j<1001;j+=i){
            s[j]=1;
        }
    }
    ll t;
    cin >> t;
    while(t--){
         ll n,m,count=0,count2=0,flag=0;
         cin >> n >> m;
         ll a[n][m];
         if(s[m]){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    count++;
                    a[i][j]=count;
                }
            }
         }
         else if(s[n]){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    count++;
                    a[j][i]=count;
                }
            }
         }
         else{
           for(int i=0;i<(n+1)/2;i++){
                for(int j=0;j<m;j++){
                    count++;
                    a[i][j]=count;
                }
                count+=m;
            }
            count=m;
            for(int i=(n+1)/2;i<n;i++){
                for(int j=0;j<m;j++){
                    count++;
                    a[i][j]=count;
                }
                count+=m;
            }
         }

         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << a[i][j] << ' ';
            }
            cout << endl;
         }

    }
return 0;
}