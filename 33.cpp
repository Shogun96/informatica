#include<iostream>
using namespace std;
int  main()
{
    int m,n,p,i,j,k,poz;
    cin>>m>>n>>p;
    int a[m+1],b[n+1],c[p+1];
    for(i=1; i<=m; i++)
        cin>>a[i];
    for(i=1; i<=n; i++)
        cin>>b[i];
    for(i=1; i<=p; i++)
        cin>>c[i];
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            if(a[i]==b[j])
                for(k=1; k<=p; k++)
                    if(b[j]==c[k])
                    {
                        cout<<b[j]<<'\n'<<i<<' '<<j<<' '<<k;
                        return 0;
                    }
    return 0;
}
