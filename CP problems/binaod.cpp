#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,q;
        cin >> n >> q;
        long long a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        long long sum[60][n+1];
        for(int i=0;i<60;i++){
            for(int j=0;j<=n;j++){
                sum[i][j]=0;
            }
        }
        for(int i=0;i<60;i++){
            long long p=pow(2,i);
            for(int j=1;j<=n;j++){
                sum[i][j]+=sum[i][j-1];
                if(a[j-1]&p)
                sum[i][j]++;
            }
        }
        // for(int i=0;i<60;i++){
        //     cout<<i<<". ";
        //     for(int j=1;j<=n;j++){
        //         cout<<sum[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        while(q--){
            long long int r1,l2,r2,k,l1;
            cin >> k >> l1 >> r1 >> l2 >> r2;
            long long int ans1=(sum[k][r1]-sum[k][l1-1])*(r2-l2+1-(sum[k][r2]-sum[k][l2-1]));
            long long int ans2 = (r1-l1+1-(sum[k][r1]-sum[k][l1-1]))*((sum[k][r2]-sum[k][l2-1]));
            cout << ans1+ans2 << '\n';
        }
        
    }
    return 0;
}