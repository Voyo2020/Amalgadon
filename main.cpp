#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sclm.in");
ofstream fout("sclm.out");

int v[10005], i, j, n, lung[10005], d[10005], nrsol, lungime;

int main()
{
    fin>>n;
    for(i=1; i<=n; i++)
    {
        fin>>v[i];
    }
    lung[n]=1;
    for(i=n-1; i>=1; i--)
    {
        for(j=i+1; j<=n; j++)
        {
            if(v[i]<v[j])
            {
                if(lung[j]+1>lung[i])
                {
                    lung[i]=lung[j]+1;
                    if(lungime<lung[i])
                        lungime=lung[i];
                }
            }
        }
    }
    /*for(i=1; i<=n; i++)
        fout<<lung[i]<<" ";
    fout<<'\n';*/
    d[n]=1;
    for(i=n-1; i>=1; i--)
    {
        for(j=i+1; j<=n; j++)
        {
            if(lung[i]==lung[j]+1 && v[i]<v[j])
            {
                d[i]+=d[j];
            }
        }
    }
    for(i=1; i<=n; i++)
        fout<<d[i]<<" ";
    fout<<'\n';
    i=1;
    for(i=1; i<=n; i++)
    {
        if(lung[i]==lungime)
            nrsol+=d[i];
    }
    fout<<nrsol;
    return 0;
}
