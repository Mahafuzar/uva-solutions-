#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    while(cin>>test){
            while(test--){
                int n,sum=0;
                cin>>n;
                int a[n];
                for(int i=0;i<n;i++){
                cin>>a[i];
                sum=sum+a[i];
                  }
                  int ava,c=0;
                  ava=sum/n;
                  for(int i=0;i<n;i++){
                    if(ava < a[i]) c++;
                  }
                  float one=(float)c/(float)n;
                  float ans=one*100;
                  char p='%';
                  printf("%.3f%c\n",ans,p);
            }
    }
    return 0;
}
