#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int t = 1;
    while(test--){
        int term1,term2,finall,attendance,class_test[3],result=0;
        cin>>term1>>term2>>finall>>attendance;
        for(int i=0;i<3;i++){
            cin>>class_test[i];
        }
       sort(class_test,class_test+3);
       int test=(class_test[2]+class_test[1])/2;
    result=term1+term2+finall+attendance+test;
    char a;
    if(result>=90) a='A';
    else if(result>=80 && result<90) a='B';
    else if(result>=70 && result<80) a='C';
    else if(result>=60 && result<70) a='D';
    else a='f';
     cout<<"Case "<<t<<": "<<a<<'\n';
     t++;
    }
    return 0;
}
