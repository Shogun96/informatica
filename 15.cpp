#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
char s[256];
int ct;
int main()
{
    int i;
    ifstream fin("nume.in");
    fin>>s;
    for(i=0; s[i]; i++)
        if(strchr("aeiou",s[i]))
        {
            ct++;
            i--;
        }
    cout<<ct;
    return 0;
}
