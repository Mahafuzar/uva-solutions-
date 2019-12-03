#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,n;
    while(cin>>n){
            int c=0;
        if(n<0) break;
        else if(n==1 || n==0) c=0;
        else if(n==2) c=1;
        else {
                int f=2;
            while(f<n){
                c++;
                f=f*2;
            }
            c++;
        }
        cout<<"Case "<<t<<": "<<c<<'\n';
        t++;
    }
    return 0;
}
