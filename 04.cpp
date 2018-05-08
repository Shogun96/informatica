#include<fstream>
using namespace std;
ifstream cin("numere.in");
ofstream cout("numere.out");
void cifmax (int );
int main ()
{
    int x;
    while(cin>>x && x!=0)
        cifmax(x);
    return 0;
}

void cifmax (int n)
{
    int c=0;
    while(n!=0)
    {
        if(c<n%10)
            c=n%10;
        n=n/10;
    }
    cout<<c<<' ';
}
