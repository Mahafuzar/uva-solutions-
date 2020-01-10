#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int number,mod,binary_number,k;
    while(scanf("%llu",&number)!= EOF){
        if(number == 0) break;
        vector<int>v;
        mod=0;
        binary_number=0;
        k=0;
        while(number!=0){
            int temp = number % 2;
            if(temp==0) v.push_back(0);
            else {
                v.push_back(1);
                mod++;
            }
            number=number/2;
        }
        cout<<"The parity of ";
        for(int i=v.size()-1; i>=0;i--){
           if(k==0) binary_number=v[i];
           else {
                binary_number=(binary_number*10)+v[i];
           }
           cout<<v[i];
           k=1;
        }
        cout<<" is "<<mod<<" (mod 2)."<<'\n';
    }
    return 0;
}
