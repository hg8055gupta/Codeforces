#include <iostream>
#include<algorithm>
#include<vector>
#include<bits.h>
using namespace std;
using std::vector;
int main()
{

    int t;
    cin>>t;
    for(int d=0;d<t;d++)
    {
        int n,w=0,c=0;
    cin>>n;
    int k;
    cin>>k;
    vector<int> m(k);
   // for(int q=0;q<k;q++)
  //  {
      //  m[q]=1;
    //}
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
   /* for(int e=0;e<n;e++)
    {
        if(a[e]>k)
        {
            cout<<-1<<endl;
            //goto v;
            c=1;
        }
    }
    if(c==1)
        continue;*/
    sort(a.begin(),a.end());
    /*for(int v=0;v<a.size();v++)
        cout<<a[v]<<" ";
        cout<<endl;*/
    for(int u=0;u<n-1;u++)
        {
            if(a[u]==a[u+1])
            {
                continue;

            }
            else
            {
                m[w]=a[u];
                w++;
            }
        }
        m[w]=a[n-1];
       // cout<<m[0]<<" "<<m[1]<<" "<<m[2]<<endl;
       /* for(int p=0;p<=w;p++)
        {
            cout<<m[p]<<endl;
        }*/
      //  cout<<w+1<<endl;
        if(w+1<=k)
        for(int x=w+1;x<k;x++)
            m[x]=1;
            else{
                cout<<-1<<endl;
                continue;
            }
            cout<<k*n<<endl;
        for(int p=0;p<n;p++)
        {
            for(int o=0;o<k;o++)
                cout<<m[o]<<" ";
        }
        cout<<endl;


   // int g= *max_element(m.begin(),m.end());
    /*vector<int> b(k);
    for(int j=0;j<k;j++)
    {
          b[j]=a[j];
    }
    for(int y=0;y<k;y++)
        cout<<b[y];
    cout<<endl;

    binary_search(a,2,n);*/
    /*for(int h=0;h<g;h++)
    {
        for(int z=1;z<=k;z++)
            cout<<z<<" ";
    }
    //v:
    cout<<endl;*/
    }
    return 0;
}
