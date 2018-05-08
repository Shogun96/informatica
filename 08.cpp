#include <iostream>
using namespace std;
int cmmdc (int a,int b);
int main()
{
    int n,i;
    cin>>n;
    for(i=1; i<n; i++)
        if(cmmdc(i,n)==1)
            cout<<i<<' ';
    return 0;
}
int cmmdc (int a,int b)
{
    int r;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
