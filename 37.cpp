#include <iostream>
using namespace std;
int main()
{
    int n,i,j,a[100][100];
    cin>>n;
    int c=n,m=0;
    while(c)
    {
        c/=10;
        m++;
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=m; j++)
            a[j][i]=n%10;
        n=n/10;
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=m; j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
