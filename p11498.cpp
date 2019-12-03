#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test !=0){
            int xx,yy;
            cin>>xx>>yy;
        for(int i=0;i<test;i++){
            int x,y;
            cin>>x>>y;
            if(x>xx && y>yy) cout<<"NE"<<'\n';
            else if(x<xx && y>yy) cout<<"NO"<<'\n';
            else if(x<xx && y<yy) cout<<"SO"<<'\n';
            else if(x>xx && y<yy) cout<<"SE"<<'\n';
            else cout<<"divisa"<<'\n';
        }
        cin>>test;
    }
    return 0;
}
