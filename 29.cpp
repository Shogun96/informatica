#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j,poz=1,c=0 ;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(i=1; i<=m; i++)
        cin>>b[i];
    for(i=1; i<=m; i++)
        for(j=poz; j<=n; j++)
            if(b[i]==a[j])
            {
                poz=j;
                c++;
            }
    if(poz==n && c<m)
        cout<<"NU";
    else if(c==m)
        cout<<"DA";
    return 0;
}
