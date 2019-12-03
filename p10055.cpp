#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  unsigned hasmat_solder,opponent;
    while(cin>>hasmat_solder>>opponent){
       cout<<max(hasmat_solder,opponent) - min(hasmat_solder,opponent)<<'\n';
    }
    return 0;
}
