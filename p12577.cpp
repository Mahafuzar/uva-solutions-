#include<bits/stdc++.h>
using namespace std;
int main()
{
    char m[6];
    int k=0;
    while(scanf("%s",m))
    {
        if(!strcmp(m,"*")) break;
        else if(!strcmp(m,"Hajj")) printf("Case %d: Hajj-e-Akbar\n",++k);
        else printf("Case %d: Hajj-e-Asghar\n",++k);
    }
    return 0;
}
