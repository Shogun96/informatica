#include<iostream>
#include<cstring>
using namespace std;
int  main()
{
    int i,j,n;
    char a[100];
    cin.get(a,100);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='z')
            a[i]='a';
        else
            a[i]=a[i]+1;
    }
    for(i=0; i<strlen(a); i++)
        cout<<a[i];
    return 0;
}
