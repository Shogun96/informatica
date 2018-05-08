#include <fstream>
using namespace std;
int main()
{
    char s[1001];
    ifstream f("cifre.in");
    f.getline(s, 1001);
    f.close();
    int fr[10]= {}, i;
    for(i=0; s[i]; i++)
        fr[s[i]-'0']++;
    ofstream g("cifre.out");
    for(i=9; i>-1; i--)
        while(fr[i])
            g<<i, fr[i]--;
    g.close();
    return 0;
}
