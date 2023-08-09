#include<bits/stdc++.h>
#define N 1000000

using namespace std;

bool a[N+1];


void seive(){
            cout<<"dh"<<endl;

    memset(a,1,N);
            cout<<"eh"<<endl;

    for(unsigned long long i=2;i<N;i++){

        if(a[i]==1){
                    cout<<i<<endl;

            for(unsigned long long j=i*i;j<N;j+=i){
                a[j]=0;
            }
        }
    }
        cout<<"h"<<endl;

}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cout.precision(15); cout << fixed;
   
    seive();
    cout<<"h"<<endl;
return 0;
}