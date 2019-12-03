#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    while(cin>>test){
        while(test--){
            long long int n,ans;
            cin>>n;
            n=n*567;
            n=n/9;
            n=n+7492;
            n=n*235;
            n=n/47;
            n=n-498;


            n=n/10;
            ans=n%10;
            cout<<abs(ans)<<'\n';
        }
    }
    return 0;
}
