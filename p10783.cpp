#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    while(cin>>test){
        for(int i=1;i<=test;i++){
            int num1,num2,j,k;
            cin>>num1;
            cin>>num2;
            if(num1>num2) {
                j=num2;
                k=num1;
            }
            else {
                j=num1;
                k=num2;
            }
            int ans=0;
            for(int jj=j;jj<=k;jj++){
                if(jj%2==1) ans=ans+jj;
            }
            cout<<"Case "<<i<<": "<<ans<<'\n';
        }
    }
    return 0;
}
