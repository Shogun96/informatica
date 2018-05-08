#include <fstream>
#include<cstring>
using namespace std;
ifstream cin("nume.in");
ofstream cout("nume.out");
char s[100][21];
int n;
int main()
{
    char aux[21];
    int i, j;
    while(cin.getline(s[n],21))
        n++;
    for(i=0; i<n-1 ; i++)
        for(j=i+1; j<n; j++)
            if(strcmp(s[i],s[j])>0)
            {
                strcpy (aux, s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],aux);
            }
    for(i=0; i<n; i++)
        cout<<s[i]<<endl;
    return 0;
}
