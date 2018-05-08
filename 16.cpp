#include<fstream>
using namespace std;
ifstream fin ("numere.in");
ofstream fout ("numere.out");
int main ()
{
    int n;
    fin>>n;
    int a[n];
    for (int i=0;i<n;i++)fin >>a[i];
    int x;
    fin>>x;
    for (int i=0;i<n;i++)
    if (a[i]==x){for (int j=i;j<n;j++)a[j]=a[j+1];
                    n--;}
    for (int i=0;i<n;i++)fout<<a[i]<<" ";
    return 0;
}