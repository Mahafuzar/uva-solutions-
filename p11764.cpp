#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int t=1;
    while(test--){
        int length,number,temp,high=0,low=0,previous_number=0,flag=0;
        cin>>length;
        for(int i=0;i<length;i++){
            cin>>number;
            if(flag==0){
                previous_number=number;
                flag=1;
            }
            else {
                if(previous_number<number){
                    high++;
                    previous_number=number;
                }
                else if(previous_number>number){
                    low++;
                    previous_number=number;
                }
            }
        }
        cout<<"Case "<<t<<": "<<high<<" "<<low<<'\n';
        t++;
    }
    return 0;
}
