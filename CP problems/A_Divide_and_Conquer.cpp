#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin >> t;
	while(t--){
		long long n,co=0,ce=0;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]%2)
			co++;
			else
			ce++;
		}
		if(co%2==0){
			cout << 0 << endl;
		}
		else{
            long long odd[co],l=0,k=0,even[ce];
			for(int i=0;i<n;i++){
               if(a[i]%2){
                odd[l]=a[i];
                l++;
               }
               else{
                even[k]=a[i];
                k++;
               }
            }
            int count=0;
            while(1){
                int flag=0;
                for(int j=0;j<co;j++){
                    if(odd[j]%2)
                    continue;
                    else
                    flag=1;
                }
                if(flag==1){
                    // cout << count<< " | ";
                    break;
                }
                else{
                for(int j=0;j<co;j++){
                    odd[j]/=2;
                }
                count++;
                }
            }
            // for(int j=0;j<ce;j++){
            //     cout << even[j] << " ";
            // }
            int cnt=0;
            while(1 && ce>0){
                int flg=0;
                for(int j=0;j<ce;j++){
                    if(even[j]%2)
                    flg=1;
                }
                if(flg==1){
                    // cout << cnt << endl;
                    break;
                }
                else{
                for(int j=0;j<ce;j++){
                    even[j]/=2;
                }
                cnt++;
                }
            }
            if(co!=0 && ce!=0)
            cout << min(cnt,count) << endl;
            else if(co==0)
            cout << cnt << endl;
            else
            cout << count << endl;
        }
        
           
	}
	// your code goes here
	

return 0;
}