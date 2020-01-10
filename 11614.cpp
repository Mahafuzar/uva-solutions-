#include<bits/stdc++.h>
using namespace std;
 int main()
{
    unsigned long long int number,test;
    cin>>test;
    while(test--){
          cin>>number;
       unsigned long long int row=-1,temp=1,sum=0;
       for(;sum<=number;){
        sum=sum+temp;
        row++;
        temp++;
       }
       cout<<row<<'\n';
    }
    return 0;
}
