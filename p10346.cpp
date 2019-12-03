#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,k;
    while(scanf("%lld %lld",&n,&k) != EOF){
       long long int ans=n;
        if(k!=0){
        while(k<=n){
           long long int f=n/k;
           long long int j=n%k;
            n=f+j;
            ans=ans+f;
        }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
