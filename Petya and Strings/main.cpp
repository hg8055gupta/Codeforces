#include <iostream>
#include<ctype.h>
#include<algorithm>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    //char s1[100],s2[100];
    string x,y;
    cin>>x>>y;
    /*for(int i=0;i<x.size();i++)
    {
        s1[i]=x.at(i);
        if(isupper(s1[i]))
            (char)tolower(s1[i]);
    }
    for(int j=0;j<x.size();j++)
    {
        s2[j]=y.at(j);
        if(isupper(s2[j]))
            (char)tolower(s2[j]);
    }
    for(int r=0;r<x.size();r++)
    {

    }*/
    //transform(x.begin(),x.end(),x.begin(),::tolower());
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    transform(y.begin(), y.end(), y.begin(), ::tolower);
    //cout<<x<<" "<<y<<endl;
    for(int i=0;i<x.size();i++)
    {
        if(x.at(i)>y.at(i))
        {
            cout<<1;
            return 0;
        }
        else
            if(x.at(i)<y.at(i))
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    // su is the string which is converted to uppercase
    string su;
    cin>>su;

    // using transform() function and ::toupper in STL
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    cout << su << endl;

    // sl is the string which is converted to lowercase
    string sl = "Jatin Goyal";

    // using transform() function and ::tolower in STL
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    cout << sl << endl;

    return 0;
}*/
