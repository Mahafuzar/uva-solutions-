#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    while(cin>>test){
        for(int k=1;k<=test;k++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int f;
        if(n%2==1)f=(n/2);
        else f=(n/2)-1;
        cout<<"Case "<<k<<": "<<a[f]<<'\n';
            }
    }
    return 0;
}
