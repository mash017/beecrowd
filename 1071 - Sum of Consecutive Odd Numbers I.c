#include<stdio.h>

int main()
{
    int x,y,i,z=0,e,a;
    scanf("%d%d",&x,&y);
    if(x<y)
    {e=x;
    a=y;}
    else
    {
    e=y;
    a=x;
    }
    for(i=e+1;i<a;++i)
    {if(i%2!=0)
    {z=z+i;}}
    printf("%d\n",z);
    return 0;}
