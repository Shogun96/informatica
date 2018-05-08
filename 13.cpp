#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    int x, fr[100]= {}, n;
    ifstream f("numere.in");
    f>>n;
    while(n)
    {
        f>>x;
        fr[x]++;
        n--;
    }
    f.close();
    int maxim=fr[0], i, c=0;
    for(i=1; i<100; i++)
        if(fr[i]>maxim)
        {
            maxim=fr[i];
            c=i;
        }
    cout<<"Numarul care apare cel mai des este "<<c;
    return 0;
}
