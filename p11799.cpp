#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    while(cin>>test){
        int t=1;
        while(test--){
                int a,k;
                vector<int>n;
                cin>>k;
                for(int i=0;i<k;i++){
                   cin>>a;
                   n.push_back(a);
                }
               int ans=n[0];
               for(int i=1;i<k;i++){
                if(ans < n[i]) ans=n[i];
               }
               cout<<"Case "<<t<<": "<<ans<<'\n';
               t++;
        }
    }
    return 0;
}
