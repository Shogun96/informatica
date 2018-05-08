#include <iostream>
using namespace std;
int fr[27];
int main()
{
    char s[256];
    cin.getline(s,256);
    int i;
    for(i=0; s[i]; i++)
        fr[s[i]-97]++;
    for(i=0; s[i]; i++)
        if(fr[s[i]-97]==1)
        {
            cout<<s[i];
            return 0;
        }
        else
            cout<<"NU EXISTA";
    return 0;
}
