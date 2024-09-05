#include<iostream>
using namespace std;
int main()
{
    long long int e,m,b,min1,min2;
    cin>>e>>m>>b;
    if(e<m&&e<b)
    {
        min1=e;
    }
    else if(m<e&&m<b)
    {
        min1=m;
    }
    else if(b<e&&b<m)
    {
        min1=b;
    }
    long long int newe,newm,newb;
    newe=(e-min1)/2;
    newm=m-min1;
    newb=b-min1;
    if(newe<=newb)
    {
        cout<<min1+newe<<endl;
    }
    else if(newb<newe)
    {
        cout<<min1+newb<<endl;
    }
    return 0;
}
