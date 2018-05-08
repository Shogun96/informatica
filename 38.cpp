#include <iostream>
using namespace std;
int fr[100];
int main()
{
    int n,i,j,c=0;
    cin>>n;
    int a[n+1];
    for( i=1; i<=n; i++)
        cin>>a[i];
    for( i=1; i<=n; i++)
        for(j=i+1; j<=n; j++)
            if((a[i]+a[j])%5==0)
                c++;
    cout<<c;
    return 0;
}
