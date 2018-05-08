#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("date.in");
int main()
{
    int n,i,k=0,p;
    fin>>n;
    int a[n+1];
    for(i=1; i<=n; i++)
        fin>>a[i];
    fin>>p;
    for(i=1; i<=n; i++)
        while(a[i]%p==0)
        {
            k++;
            a[i]/=2;
        }
    cout<<k;
    return 0;
}
