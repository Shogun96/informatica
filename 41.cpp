#include <iostream>
using namespace std;
int fr[100];
int main()
{
    int n,s=0,a,min=900;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        s=s+a;
        fr[a]++;
    }
    for(int i=1; i<=99; i++)
        if(s-i*fr[i]<min)
        {
            min=s-i*fr[i];
            n=i;
        }
    cout<<n<<' '<<min;
    return 0;
}
