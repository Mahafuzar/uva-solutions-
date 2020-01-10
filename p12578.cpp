#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    double pi=acos(-1);
    scanf("%d",&test);
    while(test--){
        int l;
        scanf("%d",&l);
        double w,r;
        w = (double)l * .6;
        r = (double)l * .2;
        double area_of_red = pi*r*r;
        double area_of_green = ((double)l * w) - area_of_red;
        printf("%.2lf %.2lf\n",area_of_red,area_of_green);
    }
    return 0;
}
