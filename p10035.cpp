#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned int a,b;
    while(scanf("%u %u",&a,&b) != EOF){
         if(a == 0 && b == 0) break;
         int carry=0,total_carry=0;
         while(1){
            if(a == 0 && b == 0) break;
            int r=a%10;
            a=a/10;
            int t=b%10;
            b=b/10;
            int sum = r+t+carry;
            if(sum>9) {
                total_carry++;
                carry=1;
            }
            else carry = 0;
         }
         if(total_carry == 1) printf("%d carry operation.\n",total_carry);
         else if(total_carry == 0) printf("No carry operation.\n");
         else printf("%d carry operations.\n",total_carry);
    }
    return 0;
}
