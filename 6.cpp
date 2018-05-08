#include<iostream>
using namespace std;
int cmmdc (int, int );
int main ()
{
    int a,b;
    cin>>a>>b;
    cout<<a/cmmdc(a,b)<<' '<<b/cmmdc(a,b);
    return 0;
}
int cmmdc (int a, int b)
{
    int c;
    while (b)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
