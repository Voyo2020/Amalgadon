#include<fstream>
using namespace std;
int n,v[8010],c[8010],i,f,aux,j,m;
ifstream fi("reactivi.in");
ofstream fo("reactivi.out");
int main()
{
    fi>>n;
    for(i=1;i<=n;i++)
    {
        fi>>v[i]>>c[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(c[i]>c[j])
            {
                swap(v[i],v[j]);
                swap(c[i],c[j]);
            }
            else
            {
                if(c[i]==c[j] && v[i]>v[j])
                    swap(v[i],v[j]);
            }
        }
    }
    f=1;
    m=c[1];
    for(i=2;i<=n;i++)
    {
        if(v[i]>m)
        {
            f++;
            m=c[i];
        }
    }
    fo<<f;
    return 0;
}
