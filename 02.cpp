#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("numere.in");
int main()
{
    int max1,max2,n,i;
    fin>>n;
    int v[n+1];
    for( i=1; i<=n; i++)
        fin>>v[i];

    max1=v[1];
    max2=v[2];
    for(i=3; i<=n; i++)
        if(max1<v[i])
        {
            max2=max1;
            max1=v[i];
        }

    cout<<"Valoarea maxima: "<<max1<<endl;
    cout<<"Valoarea imediat mai mica :"<<max2;

    return 0;
}
