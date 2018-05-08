#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n][n], i ,j;
   int c=2;
   for(i=0; i<n; i++)
       for(j=0; j<n; j++)
           a[i][j]=c, c+=2;

   for(i=0; i<n; i++)
   {
       for(j=0; j<n; j++)
           cout<<a[i][j]<<' ';
       cout<<endl;
   }
}