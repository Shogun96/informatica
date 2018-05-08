#include<iostream>
using namespace std;
int main ()
{
    int n,i,c;
    cin>>n;
    i=2;
    while(n!=1)
    {
        c=0;
        while(n%i==0)
        {
            c++;
            n=n/i;
        }
        if(c!=0)
            cout<<i<<' '<<c<<endl;
        i++;
    }
    return 0;
}
