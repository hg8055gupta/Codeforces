#include <iostream>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
    int n,f=0;

    string d[5]={"Icosahedron","Cube","Octahedron","Dodecahedron","Tetrahedron"};
    cin>>n;
    char c[n][13];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int j=0;j<n;j++)
    {
        if(c[j]==d[0])
            f+=20;
       else if(c[j]==d[1])
           f=f+6;
        else if(c[j]==d[2])
           f=f+8;
        else if(c[j]==d[3])
            f=f+12;
        else if(c[j]==d[4])
            f=f+4;
    }
    cout<<f;
    return 0;
}
