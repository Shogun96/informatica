#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m, c;
    while(n)
    {
        c=0;
        m=1;
        while(m<=n/2)
        {
            m=m*2;
            c++;
        }
        n-=m;
        if(c!=0)
            cout<<c<<' ';
    }
    return 0;
}
