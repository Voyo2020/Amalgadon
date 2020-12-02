#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("numeremari.in");
ofstream fout("numeremari.out");

long long n, i, fv1[10005], fv2[10005], x, y, j, sum, s1=-1, s2=-1;

int main()
{
    fin>>n;
    for(i=1; i<=n; i++)
    {
        fin>>x;
        fv1[x]++;
    }
    for(i=1; i<=n; i++)
    {
        fin>>y;
        fv2[y]++;
    }
    i=0;
    j=0;
    sum=0;
    while(i<=10000 && j<=10000)
    {
        if(fv1[i]>0 && s1==-1)
        {
            fv1[i]--;
            s1=i;
        }
        else if(s1==-1)
        {
            i++;
        }
        if(fv2[j]>0 && s2==-1)
        {
            fv2[j]--;
            s2=j;
        }
        else if(s2==-1)
        {
            j++;
        }
        if(s1>=0 && s2>=0)
        {
            sum+=abs(s1-s2);
            s1=-1;
            s2=-1;
        }
    }
    fout<<sum;
    return 0;
}
