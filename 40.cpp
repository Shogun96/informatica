#include <iostream>
using namespace std;
int fr[100];
int main()
{
    int n,k,a;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        fr[a]++;
    }
    for(int i=1; i<=99; i++)
        if(fr[i]>=k)
            cout<<i<<' ';
    return 0;
}
