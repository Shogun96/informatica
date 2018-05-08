#include <iostream>
using namespace std;
int fibo(int n);
int main()
{
    int k ;
    cin>>k;
    if(fibo(k)==0)
        cout<<k<<' '<<"este termen al sirului lui fibonacci";
    return 0;
}
int fibo(int n)
{
    if(!n)
        return 0;
    if(n==1)
        return 0;
    int f1=0;
    int f2=1,f3=1;
    while(f3<n)
    {

        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(f3==n)
        return 0;
    return 1;
}
