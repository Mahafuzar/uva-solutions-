#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t){
            while(t--){
        string a;
        cin>>a;
        int n=a.size();
		if (n > 3)
			printf("3\n");
		else {
			if(a[0] == 'o' && a[1] == 'n' && a[2] == 'e') printf("1\n");
			else if(a[0] == 'o' && a[1] == 'n') printf("1\n");
			else if(a[0] == 'o' && a[2] == 'e') printf("1\n");
			else if(a[1] == 'n' && a[2] == 'e') printf("1\n");
			else if(a[0] == 't' && a[1] == 'w' && a[2] == 'o') printf("2\n");
			else if(a[0] == 't' && a[1] == 'w') printf("2\n");
			else if(a[0] == 't' && a[2] == 'o') printf("2\n");
			else if(a[1] == 'w' && a[2] == 'o') printf("2\n");
		}
	}
    }
    return 0;
}
