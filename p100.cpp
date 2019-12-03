#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,ans,nummax,nummin;

        while(scanf("%d %d",&num1,&num2)!=EOF){
                ans=0;
          printf("%d %d ",num1,num2);
            if(num2>num1) {
                    nummin=num1;
                    nummax=num2;
            }
            else {
                nummax=num1;
                nummin=num2;
            }
           int j=nummax;
            for(int i=nummin;j>=i;i++){
                int cycle_length=1;
                int n=i;
                while(n!=1){
                    if(n%2==0) n=n/2;
                    else n=(n*3)+1;
                    cycle_length++;
                }
                if(ans<cycle_length) ans=cycle_length;
            }
            printf("%d\n",ans);
        }

    return 0;
}
