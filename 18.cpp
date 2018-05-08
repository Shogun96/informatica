#include<iostream>
using namespace std;
int main()
{
    int n,S=0,i,j;
    cin>>n;
    int A[n][n];
    for( i=1; i<=n; i++)
        for( j=1; j<=n; j++)
            cin>>A[i][j];
    for (i=2; i<=n; i++)
        for(j=n-i+2; j<=n; j++)
            S+=A[i][j];
    cout<<"Suma elementelor de sub diagonala secundara este"<<' '<<S;
    return 0;
}
