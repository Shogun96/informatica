#include <fstream>
using namespace std;
ifstream cin("sir.in");
ofstream cout("sir.out");


int main()
{
    int n,i,v[100],x,j;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>v[i];
    cin>>x;
    i=1;
    while(v[i]<x)
        i++;
    if(i==n+1)
        v[i]=x;

    v[i]=x;
    for(j=n; j>=i; j--)
        v[j+1]=v[j];
    for(i=1; i<=n+1; i++)
        cout<<v[i]<<' ';


    return 0;
}
