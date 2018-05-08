#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin.getline(s, 256);
    int ct=0;
    char *p=strtok(s, " ");
    while(p)
    {
        ct++;
        p=strtok(NULL, " ");
    }
    cout<<ct;
    return 0;
}
