#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int k=1;
    while(getline(cin,a)){
        for(int i=0;a[i]!='\0';i++){
            if('"'==a[i]){
                if(k%2==1){
                    cout<<"``";
                    k++;
                }
                else {
                    cout<<"\'\'";
                    k++;
                }
            }
            else cout<<a[i];
        }
        cout<<'\n';
    }
    cout<<'\n';
    return 0;
}
