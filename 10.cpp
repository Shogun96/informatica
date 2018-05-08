#include<fstream>
using namespace std;
ifstream cin("numere.in");
ofstream cout("numere.out");
int main ()
{
    int m,n;
    cin>>m>>n;
    int a[n],b[m],c[m+n];
    int i,j,k=0;
    i=j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
            c[k]=a[i],k++,i++;
        else
            c[k]=b[j],k++,j++;
    }
    while(i<n)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<m)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    return 0;
}
