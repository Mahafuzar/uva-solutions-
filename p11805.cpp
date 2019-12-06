#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    while(cin>>test){
        int t=1;
        while(test--){
            int total_player,first_pass,total_pass;
            cin>>total_player>>first_pass>>total_pass;
            total_pass = (total_pass % total_player);
            if(total_pass == 0) cout<<"Case "<<t<<": "<<first_pass<<'\n';
            else {
                int temp = (first_pass + total_pass);
                if(temp == total_player) cout<<"Case "<<t<<": "<<total_player<<'\n';
                else if(temp < total_player) cout<<"Case "<<t<<": "<<temp<<'\n';
                else if(temp > total_player) cout<<"Case "<<t<<": "<<(temp - total_player)<<'\n';
            }
            t++;
        }
    }
    return 0;
}
