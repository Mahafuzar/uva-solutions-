#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    while(cin>>test){
        for(int i=1;i<=test;i++){
                int a,aa,aaa;
            cin>>a>>aa>>aaa;
            int ans;
            if((a>aa && a<aaa) || (a>aaa && a<aa)) ans=a;
            else if((aa>a && aa<aaa) || (aa>aaa && aa<a)) ans=aa;
            else ans = aaa;
            cout<<"Case "<<i<<": "<<ans<<'\n';
        }
    }
    return 0;
}

