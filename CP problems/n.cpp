    #include<bits/stdc++.h>
    using namespace std;
    int main(){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL); cout.tie(NULL);
       cout.precision(15); cout << fixed;
       int n,temp;
       cin >> n;
       map <int,int>m;
       for(int i=0;i<n;i++){
       cin >> temp;
       m[temp]++;
       }
       if(m[3]>=m[1])
       cout << m[4]+m[3]+m[2]/2+m[2]%2;
       else if(m[2]%2==0 && m[1]>4)
       cout << m[4]+m[3]+m[2]/2+(m[1]-m[3])/4+(m[1]-m[3])%4;
       else if((m[1]-m[3])%4<=2)
       cout << m[4]+m[3]+m[2]/2+(m[1]-m[3])/4+max(m[2]%2,1);
       else 
       cout << m[4]+m[3]+m[2]/2+(m[1]-m[3])/4+m[2]%2+1;
    return 0;
    }