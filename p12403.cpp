#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t){
            int n=0;
        while(t--){
            string a;
            cin>>a;
            if(a=="donate"){
                int nn;
                cin>>nn;
                n+=nn;
            }
            else if(a=="report"){
                cout<<n<<'\n';
            }
        }
    }
    return 0;
}
