#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int row,column;
        cin>>row>>column;
        int ans = (row/3)*(column/3);
        cout<<ans<<'\n';
    }
    return 0;
}
