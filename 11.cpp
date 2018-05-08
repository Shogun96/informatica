#include<iostream>
using namespace std;
int prim(int n);
int  main()
{
    int x,i,j,ok=0;
    cin>>x;
    for(i=2; i<=x; i++)
        for(j=i; j<=x; j++)
            if(prim(i)*prim(j)==1 && i*j==x)
            {
                cout<<i<<" "<<j<<' ';
                ok=1;
            }
    if(ok==1)
    {
        cout<<"Da";
        ok=0;
    }
    else
        cout<<"Nu" ;
}
int prim (int n)
{
    if(n<2 )
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(int d=3; d<=n/2; d+=2)
        if(n%d==0)
            return 0;
    return 1;
