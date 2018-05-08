#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[256];
    cin.getline(s,256);
    int i,j;
    for(i=0; i<strlen(s); i++)
    {
        for(j=0; j<strlen(s); j++)
            if(i!=j)
                cout<<s[j];
        cout<<endl;
    }
    return 0;
}
