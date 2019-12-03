#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned int length1,length2,length3,a,b,c;
    while(cin>>length1>>length2>>length3){
        if(length1 == 0 && length2 == 0 && length3 == 0) return 0;
       if(length1>length2 && length1>length3) {
        a=length1;
        b=length2;
        c=length3;
       }
       else if(length2>length1 && length2>length3) {
        a=length2;
        b=length1;
        c=length3;
       }
       else{
        a=length3;
        b=length2;
        c=length1;
       }
       unsigned int length1_square = pow(b,2);
       unsigned int length2_square = pow(c,2);
       unsigned int length3_square = a*a;
       unsigned int sum_of_length1_and_2_square = length1_square + length2_square;
        if(sum_of_length1_and_2_square == length3_square) cout<<"right"<<'\n';
        else cout<<"wrong"<<'\n';
    }
    return 0;
}
