#include <iostream>
using namespace std;
int fr[100];
int main()
{
    int n,i,j,k,c=0;
    cin>>n;
    int a[n+1];
    for( i=1; i<=n; i++)
        cin>>a[i];
    for( i=1; i<=n; i++)
        for(j=i+1; j<=n; j++)
            for(k=j+1; k<=n; k++)
                if((a[i]+a[j]+a[k])%2!=0)
                    c++;
    cout<<c;
    return 0;
}
