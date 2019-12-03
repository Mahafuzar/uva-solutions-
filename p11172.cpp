#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num1,num2;
    int t;
    while(cin>>t){
    if(t<15)
    while(t--){
        cin>>num1>>num2;
        if(num1 > num2) cout<<'>'<<'\n';
        else if( num1 < num2) cout<<'<'<<'\n';
        else cout<<'='<<'\n';
    }
      }
    return 0;
}
