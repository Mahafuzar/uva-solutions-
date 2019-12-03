#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int t=1;
    while(cin>>name){
        if(name == "#") break;
        if(name == "HELLO") cout<<"Case "<<t<<':'<<" ENGLISH"<<'\n';
        else if(name == "HOLA") cout<<"Case "<<t<<':'<<" SPANISH"<<'\n';
        else if(name == "HALLO") cout<<"Case "<<t<<':'<<" GERMAN"<<'\n';
        else if(name == "BONJOUR") cout<<"Case "<<t<<':'<<" FRENCH"<<'\n';
        else if(name == "CIAO") cout<<"Case "<<t<<':'<<" ITALIAN"<<'\n';
        else if(name == "ZDRAVSTVUJTE") cout<<"Case "<<t<<':'<<" RUSSIAN"<<'\n';
        else cout<<"Case "<<t<<':'<<" UNKNOWN"<<'\n';
        t++;
    }
    return 0;
}
