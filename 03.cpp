#include <iostream>
#include<fstream>
using namespace std;
int palin(int);
ofstream fout("palin.txt");
int main()
{
    int a,b,i ;
    cin>>a>>b;
    for(i=a; i<=b; i++)
        if(palin(i))
            cout<<i<<' ';

    return 0;
}
int palin(int n)
{
    int p=n, inv=0;
    while(n!=0)
    {
        inv=inv*10+n%10;
        n=n/10;
    }
    if(inv==p)
        return 1;
    return 0;
}
